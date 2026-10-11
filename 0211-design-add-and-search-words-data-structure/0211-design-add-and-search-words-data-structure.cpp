class WordDictionary {
public:
    struct Node {
        unordered_map<char, Node*> mp;
        bool endofword;
        Node() { endofword = false; }
    };
    Node* root;
    WordDictionary() { root = new Node(); }
    void addWord(string word) {
        Node* temp = root;
        for (int i = 0; i < word.size(); i++) {

            if (temp->mp.count(word[i]) == 0) {
                temp->mp[word[i]] = new Node();
            }
            temp = temp->mp[word[i]];
        }
        temp->endofword = true;
    }

    bool dfs(string& word, int idx, Node* node) {
        if (idx == word.size())
            return node->endofword;

        char ch = word[idx];

        if (ch == '.') {
            for (auto& it : node->mp) {
                if (dfs(word, idx + 1, it.second))
                    return true;
            }
            return false;
        }

        if (node->mp.count(ch) == 0)
            return false;

        return dfs(word, idx + 1, node->mp[ch]);
    }

    bool search(string word) {
        return dfs(word, 0, root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */