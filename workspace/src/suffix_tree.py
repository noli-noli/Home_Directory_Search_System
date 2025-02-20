class SuffixTree:
    def __init__(self):
        self.tree = {}

    def add_string(self, string, filename):
        """ 文字列（コード）をサフィックスツリーに追加 """
        for i in range(len(string)):
            suffix = string[i:]
            node = self.tree
            for char in suffix:
                if char not in node:
                    node[char] = {}
                node = node[char]
            node["$"] = filename  # 終端記号（どのファイルかを記録）

    def search(self, query):
        """ クエリが部分一致するファイルを検索 """
        node = self.tree
        for char in query:
            if char in node:
                node = node[char]
            else:
                return []  # 一致なし

        # 一致するファイルを取得
        results = set()
        self._collect_filenames(node, results)
        return list(results)

    def leaves(self):
        """ ツリー内の全てのリーフノードを取得 """
        results = []
        self._collect_leaves(self.tree, "", results)
        return results

    def _collect_filenames(self, node, results):
        """ 終端記号のあるノードを探索し、関連ファイルを取得 """
        if "$" in node:
            results.add(node["$"])
        for key in node:
            if key != "$":
                self._collect_filenames(node[key], results)


    def _collect_leaves(self, node, current_path, results):
        """ 再帰的にリーフノードを収集 """
        if "$" in node:
            results.append(current_path)  # 現在のパス（リーフまでの文字列）を追加
        for key in node:
            if key != "$":
                self._collect_leaves(node[key], current_path + key, results)

    def find_path(self, target_string):
        """ 指定した文字列が存在する場合、そのノードまでのパスを返す """
        node = self.tree
        path = ""
        for char in target_string:
            if char in node:
                path += char
                node = node[char]
            else:
                return None  # 一致するパスが見つからない
        return path


def longest_common_substring_suffix_tree(s1, s2):
    """ サフィックスツリーを用いた最長共通部分（LCS）検索 """
    combined = s1 + "#" + s2
    tmp_tree = SuffixTree()
    tmp_tree.add_string(combined, "$")

    lcs = ""
    for leaf in tmp_tree.leaves():
        substr = tmp_tree.find_path(leaf)
        if "#" not in substr and "$" not in substr:
            if len(substr) > len(lcs):
                lcs = substr
    return lcs


def score_lcs(s1, s2):
    """ LCSの長さに基づいて類似度スコアを計算 """
    lcs = longest_common_substring_suffix_tree(s1, s2)
    if len(lcs) == 0:
        return 0.0
    return len(lcs) / min(len(s1), len(s2))


def search_and_rank_lcs(query, dataset):
    """ クエリとデータセットの各エントリでLCSを求め、スコアを計算し、ランキングする """
    results = []

    for filename, content in dataset.items():
        lcs = longest_common_substring_suffix_tree(query, content)
        score = score_lcs(query, content)
        if score > 0:
            results.append((filename, score, lcs, content))

    # スコアが高い順にソート
    results.sort(key=lambda x: x[1], reverse=True)

    return results


# ファイルデータ
FILES = {
    "file1.py": "import numpy as np\nnp.array([1, 2, 3])",
    "file2.py": "def hello():\n    print('Hello, world!')",
    "file3.py": "import pandas as pd\ndf = pd.DataFrame({'col1': [1, 2, 3]})",
    "file4.py": "class MyClass:\n    def __init__(self):\n        self.value = 10",
    "file5.py": "import numpy"
}

# サフィックスツリーの構築
suffix_tree = SuffixTree()
for filename, content in FILES.items():
    suffix_tree.add_string(content, filename)

query = "pd.DataFrame({'col1': [1, 2, 3]})"
tmp = suffix_tree.search(query)

tmp_2 = longest_common_substring_suffix_tree(query, FILES["file1.py"])
tmp_3 = longest_common_substring_suffix_tree(query, FILES["file3.py"])

score = search_and_rank_lcs(query, FILES)

for match in score:
    print(f"ファイル: {match[0]}, スコア: {match[1]:.2f}")