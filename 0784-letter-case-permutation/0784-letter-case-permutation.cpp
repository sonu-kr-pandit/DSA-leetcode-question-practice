class Solution {
public:
    void solve(string &s, vector<string> &ans, int i) {

        if(i == s.size()) {
            ans.push_back(s);
            return  ;
        }

        if(isalpha(s[i])) {
            char original = s[i];

            
            s[i] = tolower(original);
            solve(s, ans, i+1);

            // uppercase branch
            s[i] = toupper(original);
            solve(s, ans, i+1);

            // restore (important)
            s[i] = original;
        }
        else {
            solve(s, ans, i+1);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
         solve(s, ans, 0);
         return ans;
    }
};