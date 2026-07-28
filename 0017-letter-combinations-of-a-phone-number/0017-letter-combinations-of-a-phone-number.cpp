class Solution {
public:
    vector<string> ans;

    void solve(string & digits, string &temp, int idx ,  unordered_map<char, string> &mp ) {
        if (idx >= digits.length()) {
            ans.push_back(temp);
            return;
        }

        char ch = digits[idx];
        string str = mp[ch];

        for (int i = 0; i < str.length(); i++) {
            temp.push_back(str[i]);
            solve(digits, temp, idx + 1 , mp);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0){return {};}
        string temp = "";
        unordered_map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        solve(digits, temp, 0 , mp);
        return ans;
    }
};