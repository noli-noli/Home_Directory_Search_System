import requests

# サーバーのベースURL
base_url = "http://127.0.0.1:8080"

# 1. GET メソッドの確認
def test_root():
    url = f"{base_url}/"
    response = requests.get(url)
    print("GET / response:")
    print(response.status_code)  # 200 が期待される
    print(response.json())  # {"takelab_data_rescure"} が期待される

# 2. POST メソッドの確認
def test_lcs_search():
    url = f"{base_url}/lcs_search/"
    json_data = {"query": "example query"}
    response = requests.post(url, json=json_data)
    
    print("\nPOST /lcs_search/ response:")
    print(response.status_code)  # 200 が期待される
    print(response.json())  # {"received_query": "example query"} が期待される

if __name__ == "__main__":
    test_root()
    # test_lcs_search()
