import faiss
import os
import csv
import pandas as pd
import pickle
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
    faiss_data_path = os.path.join("/workspace", "dataset", "faiss_sample.bin")
    vocab_path = os.path.join("/workspace", "dataset", "vocab_idx.pickle")
    csv_data_path = os.path.join("/workspace", "dataset", "name_other.csv")
    
    index = load_index(faiss_data_path)
    vectorizer = load_vocab(vocab_path)
    file_mapping = load_file_mapping(csv_data_path)
    
    query_text = """
from llama_cpp import Llama

#日本語入力用モジュール
import readline

# LLMの準備
llm = Llama(model_path="../models/Llama-2-70B-chat-GGUF/llama-2-70b.Q4_K_M.gguf",n_gpu_layers=83,n_ctx=512)
#llm = Llama(model_path="../models/Llama-2-70B-chat-GGUF/llama-2-70b-chat.Q5_K_M.gguf",n_gpu_layers=83,n_ctx=512)


while True:
    prompt = input("Please enter the prompt >> ")
    if prompt=="exit":
        break

    # 推論の実行
    output = llm(
        prompt,
        max_tokens=256,
        echo=False,
        #top_p=0.85,
        #top_k=10, 
    )

    print(output["choices"][0]["text"])
"""  # クエリをここに入力
    search_results = search(query_text, index, vectorizer, file_mapping)
    
    print("検索結果:")
    for filepath, score in search_results:
        print(f"{filepath} (類似度: {score})")


if __name__ == "__main__":
    main()