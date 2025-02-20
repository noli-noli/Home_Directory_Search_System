import faiss
import os
import csv
import pickle
import mimetypes
import numpy as np
from sklearn.feature_extraction.text import TfidfVectorizer



def search_file(path):
    """ 指定ディレクトリ内のファイルを再帰的に検索し、インデックス付きリストを返す """
    files = []
    index = 0
    for dirpath, _, filenames in os.walk(path):
        for filename in filenames:
            filepath = os.path.join(dirpath, filename)
            files.append([index, filename, filepath])
            index += 1
    return files


def is_text_file(filepath):
    """ ファイルがテキストファイルかどうか判定 """
    mime_type, _ = mimetypes.guess_type(filepath)
    return mime_type and mime_type.startswith("text")


def main():
    files = search_file(raw_data_path)
    documents = []
    ids = []

    for file in files:
        if is_text_file(file[2]):
            with open(file[2], "r", encoding="utf-8", errors="ignore") as f:
                documents.append(f.read())
            ids.append(file[0])
        else:
            print(f"{file[2]}はバイナリ")


    vectorizer = TfidfVectorizer()

    vectorized_data = vectorizer.fit_transform(documents).toarray().astype(np.float32)
    dimension = vectorized_data.shape[1]
    # index = faiss.IndexIDMap(faiss.IndexFlatL2(dimension))
    nlist = 5  # クラスタ数
    quantizer = faiss.IndexFlatL2(dimension)  # ベースの L2 インデックス
    index = faiss.IndexIVFFlat(quantizer, dimension, nlist, faiss.METRIC_L2)
    index.train(vectorized_data)
    file_ids = np.array(ids, dtype=np.int64)
    index.add_with_ids(vectorized_data, file_ids)
    
    faiss.write_index(index, faiss_data_path)
    with open(vocab_path, "wb") as f:
        pickle.dump(vectorizer, f)

    with open(csv_data_path, "w") as f:
        writer = csv.writer(f)
        writer.writerow(["ID", "FileName", "FilePath"])

        for row in files:
            writer.writerow([row[0], row[1], row[2]])
            


if __name__ == "__main__": 
    raw_data_path = os.path.join("/workspace", "raw_data")

    csv_data_path = os.path.join("/workspace", "dataset", "name_other.csv")
    faiss_data_path = os.path.join("/workspace", "dataset","faiss_sample.bin")
    vocab_path = os.path.join("/workspace", "dataset", "vocab_idx.pickle")

    main()
 