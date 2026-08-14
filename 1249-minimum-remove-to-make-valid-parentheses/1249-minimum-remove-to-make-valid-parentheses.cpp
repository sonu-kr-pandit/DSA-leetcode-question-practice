class Solution {
public:
    stack<int> stk;
    string minRemoveToMakeValid(string s) {

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stk.push(i);
            } else if (s[i] == ')') {
                if (!stk.empty() && s[stk.top()]=='(') {
                    stk.pop();
                } else {
                    stk.push(i);
                }
            }
        }
        if (stk.empty()) {
            return s;
        }
        unordered_set<int> remove;
        while(!stk.empty()){

            remove.insert(stk.top());
            stk.pop();
        }
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if(remove.count(i) == 0){
                ans += s[i];
            }
        }
        return ans;
    }
};