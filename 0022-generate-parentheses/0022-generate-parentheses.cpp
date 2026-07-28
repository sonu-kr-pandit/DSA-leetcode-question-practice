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

    void solve(string &s  , int n , int lbracket , int rbracket){
        if(s.length() ==  2*n){
            if(isValid(s)){
                ans.push_back(s);
            }
            return;
        }


        if(lbracket<n){
             s.push_back('(');
        solve(s , n , lbracket+ 1 , rbracket);
        s.pop_back();

        }
        // s.push_back('(');
        // solve(s , n);
        // s.pop_back();

        if( rbracket < lbracket) {
            s.push_back(')');
        solve(s , n , lbracket , rbracket+1);
        s.pop_back();

        }

        // s.push_back(')');
        // solve(s , n);
        // s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        solve( s , n , 0 , 0);
        return ans;
    }
};