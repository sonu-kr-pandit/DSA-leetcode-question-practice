class Trie {
public:
    struct Node {
        unordered_map<char, Node*> mp;
        bool endofword;
        Node() { endofword = false; }
    };

    Node* root;

    Trie() { root = new Node(); }

    void insert(string word) {
        Node* temp = root;
        for (int i = 0; i < word.size(); i++) {
            if (temp->mp.count(word[i]) == 0) {
                temp->mp[word[i]] = new Node();
            }
            temp = temp->mp[word[i]];
        }
        temp->endofword = true;
    }

    bool search(string word) {
        Node* temp = root;
        for (int i = 0; i < word.size(); i++) {
            if (temp->mp.count(word[i])) {
                temp = temp->mp[word[i]];
            } else {
                return false;
            }
        }
        return temp->endofword;
    }

    bool startsWith(string prefix) {

        Node* temp = root;

        for (int i = 0; i < prefix.size(); i++) {
            if (temp->mp.count(prefix[i]) == 0) {
                return false;
            }

            temp = temp->mp[prefix[i]];
        }

        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */