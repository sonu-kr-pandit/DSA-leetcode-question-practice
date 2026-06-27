class Solution {
public:
    bool check(string& s , int st , int end){
        while(st<=end){
            if(s[st]!=s[end]){return false;}
            st++;
            end--;
        }
        return true;
       
    }
    bool validPalindrome(string s) {
        int st = 0;
        int end = s.size()-1;
        int count = 0;
        while(st<=end){
            if(s[st]!=s[end]){
                return check(s , st , end-1) || check(s , st+1 , end) ;
                
            }
            
                st++;
                end--;
        }
        return true;
       
        
    }
};