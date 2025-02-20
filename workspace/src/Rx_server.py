from fastapi import FastAPI
from fastapi.middleware.cors import CORSMiddleware
import uvicorn
import json
from suffix_tree import *
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


class JSON_ITEM(BaseModel):
    query: str

@app.get("/")
async def root():
    print("check")
    return {"takelab_data_rescure"}

@app.post("/lcs_search/")
async def lcs_search(item: JSON_ITEM):
    return {"received_query": item.query}

if __name__ == "__main__":
    uvicorn.run(app, host="0.0.0.0", port=8080)
