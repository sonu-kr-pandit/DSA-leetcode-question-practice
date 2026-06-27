class Solution {
public:
    bool isPalindrome(string& s) {
        // for(int i =0 ; i<s.size() ; i++){
        //     if(!isalnum(s[i])){
        //         s.erase(i);
        //         i--;
        //     }
        // }
        // for(int i = 0; i<s.size() ; i++){                
        //     if(s[i]>='A' && s[i]<= 'Z'){s[i] = s[i] - 'A' +'a';}
        // }
        // int st = 0;
        // int end = s.size() - 1;
        // while(st<=end){
        //     if(s[st]!=s[end]){return false;}
        //     st++;
        //     end--;
        // }
         int left = 0, right = s.size() - 1;
        
        while (left < right) {
            // skip non-alphanumeric from left
            while (left < right && !isalnum(s[left]))
                left++;
            
            // skip non-alphanumeric from right
            while (left < right && !isalnum(s[right]))
                right--;
            
            // compare ignoring case
            if (tolower(s[left]) != tolower(s[right]))
                return false;
            
            left++;
            right--;
        }
        return true;
    }
};