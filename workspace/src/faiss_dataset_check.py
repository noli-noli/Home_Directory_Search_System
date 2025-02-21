import faiss
import os
import csv
import pandas as pd
import pickle
import time
import numpy as np
from sklearn.feature_extraction.text import TfidfVectorizer

def load_index(faiss_data_path):
    """ FAISSインデックスを読み込む """
    return faiss.read_index(faiss_data_path, faiss.IO_FLAG_MMAP)

def load_vocab(vocab_path):
    """ 保存されたTF-IDFベクトルを読み込む """
    with open(vocab_path, "rb") as f:
        return pickle.load(f)

def load_file_mapping(csv_data_path):
    """ ファイルIDとパスのマッピングを読み込む """
    mapping = {}
    with open(csv_data_path, "r", encoding="utf-8") as f:
        reader = csv.reader(f)
        next(reader)  # ヘッダーをスキップ
        for row in reader:
            mapping[int(row[0])] = row[1]  # ID -> FilePath
    return mapping

def get_file_content(df, file_name):
    # FileName に一致する行を探す
    row = df[df["FileName"] == file_name]
    
    if row.empty:
        print(f"FileName '{file_name}' が見つかりません。")
        return None

    file_path = row.iloc[0]["FilePath"]  # 最初の一致する FilePath を取得

    try:
        with open(file_path, "r", encoding="utf-8") as f:
            content = f.read()  # ファイルの内容を変数に格納
        return content
    except Exception as e:
        print(f"ファイル '{file_path}' を開く際にエラー: {e}")
        return None
    
def search(query, index, vectorizer, file_mapping, top_k=10):
    """ クエリをFAISSで検索し、類似するファイルを返す """
    query_vec = vectorizer.transform([query]).toarray().astype(np.float32)
    distances, indices = index.search(query_vec, top_k)
    
    results = []
    for idx, dist in zip(indices[0], distances[0]):
        if idx in file_mapping:
            results.append((file_mapping[idx], dist))
    
    return results


def main():
    faiss_data_path = os.path.join("/workspace", "dataset", "batchs", "tmp_faiss.bin")
    vocab_path = os.path.join("/workspace", "dataset", "vocab_idx.pickle")
    csv_data_path = os.path.join("/workspace", "dataset", "name_other.csv")
    

    vectorizer = load_vocab(vocab_path)
    index = load_index(faiss_data_path)
    file_mapping = load_file_mapping(csv_data_path)

    query_text = """
0.00000 0.45000 sil
0.45000 0.57000 sh
0.57000 0.66000 a
0.66000 0.74000 N
0.74000 0.87000 ch
0.87000 0.92000 i
0.92000 0.96000 i
0.96000 1.05000 n
1.05000 1.09000 o
1.09000 1.22000 s
1.22000 1.27000 e
1.27000 1.38000 N
1.38000 1.45000 gy
1.45000 1.52000 o
1.52000 1.59000 o
1.59000 1.64000 p
1.64000 1.67000 u
1.67000 1.76000 r
1.76000 1.82000 o
1.82000 1.90000 w
1.90000 1.95000 a
1.95000 2.69000 pau
2.69000 2.80000 ch
2.80000 2.87000 i
2.87000 2.91000 i
2.91000 2.98000 m
2.98000 3.05000 u
3.05000 3.12000 k
3.12000 3.17000 a
3.17000 3.22000 r
3.22000 3.25000 a
3.25000 3.37000 sh
3.37000 3.40000 I
3.40000 3.43000 h
3.43000 3.50000 a
3.50000 3.57000 r
3.57000 3.60000 a
3.60000 3.66000 w
3.66000 3.69000 a
3.69000 3.75000 r
3.75000 3.80000 e
3.80000 3.86000 r
3.86000 3.93000 u
3.93000 4.06000 ky
4.06000 4.10000 u
4.10000 4.18000 u
4.18000 4.30000 ry
4.30000 4.35000 o
4.35000 4.39000 o
4.39000 4.51000 t
4.51000 4.61000 o
4.61000 5.21000 pau
5.21000 5.27000 t
5.27000 5.34000 a
5.34000 5.42000 i
5.42000 5.49000 ky
5.49000 5.55000 o
5.55000 5.60000 k
5.60000 5.64000 u
5.64000 5.81000 h
5.81000 5.84000 i
5.84000 5.99000 o
5.99000 6.59000 pau
6.59000 6.69000 o
6.69000 6.72000 m
6.72000 6.79000 o
6.79000 6.85000 n
6.85000 6.91000 a
6.91000 7.08000 sh
7.08000 7.12000 u
7.12000 7.16000 u
7.16000 7.30000 ny
7.30000 7.34000 u
7.34000 7.38000 u
7.38000 7.45000 t
7.45000 7.50000 o
7.50000 7.58000 sh
7.58000 7.61000 I
7.61000 7.67000 t
7.67000 7.73000 e
7.73000 7.85000 i
7.85000 7.90000 r
7.90000 7.97000 u
7.97000 8.40000 sil

"""  # クエリをここに入力
    search_results = search(query_text, index, vectorizer, file_mapping)
    
    print("検索結果:")
    for filepath, score in search_results:
        print(f"{filepath} (類似度: {score})")


if __name__ == "__main__":
    main()