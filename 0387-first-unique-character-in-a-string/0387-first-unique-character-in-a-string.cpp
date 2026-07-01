class Solution {
public:
    int firstUniqChar(string str) {
        queue<char> q,q1;
        int freq[26] = {0};
        for(int i =0; i<str.size();i++){
            char ch = str[i];
            q.push(ch);
            freq[str[i]-'a']++;
            while(!q.empty() && freq[q.front()-'a']>1){
                q.pop();
            }
            if(q.empty()){
                q1.push(-1);
            }
            else{
                q1.push(q.front());
            }
        }
        if (q.empty()){ return -1;}
        char unique = q.front();
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == unique) return i; 
        }
        return -1;
    }
    
};