class Solution {
public:
    vector<string> ans;
    bool isValid(string s){
        int count = 0;
        for(char &ch : s){
            if(ch=='('){
                count++;
            }else{
                count--;
            }
            if(count<0){return false;}
        }
        return count == 0;
    }

    void solve(string &s  , int n){
        if(s.length() ==  2*n){
            if(isValid(s)){
                ans.push_back(s);
            }
            return;
        }
        s.push_back('(');
        solve(s , n);
        s.pop_back();

        s.push_back(')');
        solve(s , n);
        s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        solve( s , n);
        return ans;
    }
};