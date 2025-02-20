from fastapi import FastAPI
from fastapi.middleware.cors import CORSMiddleware
from faiss_dataset_check import *
import uvicorn
import json
from pydantic import BaseModel


app = FastAPI()


# CORS 設定
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],  # すべてのオリジンを許可
    allow_credentials=True,
    allow_methods=["GET", "POST"],  # 許可するメソッド
    allow_headers=["*"],  # すべてのヘッダーを許可
)


class INPUT_CODE(BaseModel):
    input_code: str

class FILE_NUMBER(BaseModel):
    file_number: str

@app.get("/")
async def root():
    print("check")
    return {"takelab_data_rescure"}

@app.post("/query_file_test/")
async def query_file(item: FILE_NUMBER):
    rx_filenum = item.file_number
    print(rx_filenum)
    sample_json = {
        "code" : "sample_code"
    }
    return sample_json


@app.post("/vecter_search_test/")
async def lcs_search(item: INPUT_CODE):
    rx_code = item.input_code
    print(rx_code)
    # 類似度検索の結果のサンプルとする
    sample_json = {
        "file1": "sample1",
        "file2": "sample2",
        "file3": "sample3",
        "file4": "sample4"
    }
    return sample_json


@app.post("/query_file/")
async def query_file(item: FILE_NUMBER):
    rx_filenum = item.file_number
    file_content = get_file_content(df, rx_filenum)
    sample_json = {
        "code" : file_content
    }

    return sample_json  


@app.post("/vecter_search/")
async def lcs_search(item: INPUT_CODE):
    rx_code = item.input_code
    search_results = search(rx_code, index, vectorizer, file_mapping)
    print("検索結果:")
    for filepath, score in search_results:
        print(f"{filepath} (類似度: {score})")
    sample_dict = {}
    for filepath, score in search_results:
        sample_dict[str(score)] = filepath
    print(sample_dict)
    return sample_dict


if __name__ == "__main__":
    faiss_data_path = os.path.join("/workspace", "dataset", "faiss_sample.bin")
    vocab_path = os.path.join("/workspace", "dataset", "vocab_idx.pickle")
    csv_data_path = os.path.join("/workspace", "dataset", "name_other.csv")
    
    index = load_index(faiss_data_path)
    vectorizer = load_vocab(vocab_path)
    file_mapping = load_file_mapping(csv_data_path)
    df = pd.read_csv(csv_data_path, encoding="utf-8")
    
    uvicorn.run(app, host="0.0.0.0", port=8080)
