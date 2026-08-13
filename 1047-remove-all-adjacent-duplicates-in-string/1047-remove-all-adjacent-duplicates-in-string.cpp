class Solution {
public:
    stack<char> stk;
    // string reverse(string s){
    //     int i = 0 ; 
    //     int j = s.size()-1;
    //     while( i < j){
    //         swap(s[i], s[j]);
    //     }
    //     return s;
    // }
    string removeDuplicates(string s) {
        for(int i = s.size()-1 ; i >=0 ; i--){
            if(stk.empty() || stk.top() != s[i]){
                stk.push(s[i]);
            }else if(s[i] == stk.top()){
                stk.pop();
            }
        }
        string ans;
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();

        }
        
        return ans;
    }
};