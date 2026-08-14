class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();

        if(n%2 !=0){return false;}

        stack<int> Open;
        stack<int> OpenClosed;

        for(int i = 0 ; i< n ; i++){
            if(locked[i]== '0'){
                 OpenClosed.push(i);
            }else if(s[i] == '('){
                Open.push(i);
               
            }else if(s[i] == ')'){
                if(!Open.empty()){
                    Open.pop();
                }else if(!OpenClosed.empty()){
                    OpenClosed.pop();
                }else{
                    return false;
                }
            }
        }

        while(!Open.empty() && !OpenClosed.empty() && Open.top() < OpenClosed.top() ){
           
            Open.pop();
            OpenClosed.pop();
        }
        return Open.empty();        
    }
};