import os
import csv
import pickle
import numpy as np
import faiss
import threading
import mimetypes
import random
from tqdm import tqdm
from joblib import Parallel, delayed
from sklearn.feature_extraction.text import TfidfVectorizer
from concurrent.futures import ThreadPoolExecutor, as_completed



def search_file(path):
    """ 指定ディレクトリ内のファイルを再帰的に検索し、インデックス付きリストを返す """
    files = []
    index = 0
    for dirpath, _, filenames in os.walk(path):
        for filename in filenames:
            filepath = os.path.join(dirpath, filename)
            if is_text_file(filepath):
                files.append([index, filename, filepath])
                index += 1
    return files


def is_text_file(filepath):
    """ ファイルがテキストファイルかどうか判定 """
    mime_type, _ = mimetypes.guess_type(filepath)
    return mime_type and mime_type.startswith("text")


def initialize_vectorizer(files, vocab_path):
    # 5000個のファイルをランダムに選ぶ
    sample_files = random.sample(files, min(1000, len(files)))
    sample_documents = []

    for file in sample_files:
        if is_text_file(file[2]):
            with open(file[2], "r", encoding="utf-8", errors="ignore") as f:
                text = f.read()
            sample_documents.append(text)

    # TfidfVectorizerの作成
    vectorizer = TfidfVectorizer()
    vectorizer.fit(sample_documents)

    # 辞書の保存
    with open(vocab_path, "wb") as f:
        pickle.dump(vectorizer, f)

    return vectorizer


def initialize_on_disk_faiss_index(dimension, nlist, on_disk_path, quantizer):
    index = faiss.IndexIVFFlat(quantizer, dimension, nlist, faiss.METRIC_L2)
    invlists = faiss.OnDiskInvertedLists(nlist, dimension * 4, on_disk_path)
    index.replace_invlists(invlists)
    return index



def process_files_in_batches(files, batch_size, vectorizer, csv_data_path, index_path):
    file_count = 0

    sample_documents = []
    sample_count = min(256, len(files))

    # 共通
    for file in files[:sample_count]:
        with open(file[2], "r", encoding="utf-8", errors="ignore") as f:
            text = f.read()
        sample_documents.append(text)
    common_dimension = len(vectorizer.get_feature_names_out())


    # ----- IndexIVFPQ のパラメータ設定 -----
    nlist = 16  # 粗いクラスタ数（データや精度に合わせて調整）
    m = 8        # サブ量子化器の数（各ベクトルを m 分割）
    nbits = 8    # 各サブ量子化器で使用するビット数

    # 粗いクラスタ（量子化器）の作成
    quantizer = faiss.IndexFlatL2(common_dimension)
    # IVFPQ インデックスの作成
    base_index = faiss.IndexIVFPQ(quantizer, common_dimension, nlist, m, nbits)

    # サンプルデータで学習
    training_vectors = vectorizer.transform(sample_documents).toarray().astype('float32')
    base_index.train(training_vectors)
    print("IVFPQ インデックスの学習が完了しました。")

    # ID 管理のため IndexIDMap でラップする
    index = faiss.IndexIDMap(base_index)


    # CSV 出力ファイルの初期化（ヘッダー書き込み）
    with open(csv_data_path, "a", newline="") as csvfile:
        writer = csv.writer(csvfile)
        if os.stat(csv_data_path).st_size == 0:
            writer.writerow(["ID", "FileName", "FilePath"])

        total_files = len(files)
        while file_count < total_files:
            print(f"Processing files {file_count} ～ {min(file_count + batch_size, total_files)} / {total_files}")
            batch_files = files[file_count : file_count + batch_size]
            batch_documents = []
            batch_ids = []
            for file in batch_files:
                try:
                    with open(file[2], "r", encoding="utf-8", errors="ignore") as f:
                        text = f.read()
                    batch_documents.append(text)
                    batch_ids.append(file[0])
                    # CSV にファイル情報を書き込む
                    writer.writerow([file[0], file[1], file[2]])
                except Exception as e:
                    print(f"Error processing file {file[2]}: {e}")

            if batch_documents:
                # バッチ内のテキストをベクトル化
                batch_vectors = vectorizer.transform(batch_documents).toarray().astype('float32')
                batch_ids_np = np.array(batch_ids, dtype='int64')
                # バッチごとにインデックスへ追加
                index.add_with_ids(batch_vectors, batch_ids_np)
                print(f"バッチ {file_count} ～ {file_count + len(batch_documents)} 件のデータを追加しました。")

            file_count += batch_size

            # # 定期的に部分インデックスを保存（例：10バッチ毎）
            # if file_count % (batch_size * 100) == 0:
            #     partial_index_path = f"partial_index_{file_count}.index"
            #     faiss.write_index(index, partial_index_path)
            #     print(f"部分インデックスを {partial_index_path} に保存しました。")

    # 全バッチ追加完了後、最終インデックスを保存
    faiss.write_index(index, index_path)
    print(f"最終インデックスを {index_path} に保存しました。")

# メイン処理
def main():
    files = search_file(raw_data_path)
    print(f"file数:{len(files)}")

    # 1. TfidfVectorizerの初期化（辞書ファイルが存在するか確認）
    if os.path.exists(vocab_path):
        print("辞書ファイルの読み込み")
        with open(vocab_path, "rb") as f:
            vectorizer = pickle.load(f)
    else:
        print("辞書ファイルの作成")
        vectorizer = initialize_vectorizer(files, vocab_path)

    # 2. 1000個ずつデータを追加
    process_files_in_batches(files, batch_size=32, vectorizer=vectorizer, csv_data_path=csv_data_path, index_path=faiss_tmp_data_path)

            
if __name__ == "__main__": 
    raw_data_path = os.path.join("/workspace", "raw_data_tmp")
    csv_data_path = os.path.join("/workspace", "dataset", "name_other.csv")
    faiss_data_path = os.path.join("/workspace", "dataset","faiss.bin")
    faiss_tmp_data_path = os.path.join("/workspace", "dataset","batchs","tmp_faiss.bin")
    on_disk_path = os.path.join("workspace", "dataset", "on_disk_index.ivfdata")
    vocab_path = os.path.join("/workspace", "dataset", "vocab_idx.pickle")



    main()
 