class Solution {
public:
    string toLowerCase(string& s) {
        for(int i = 0; i<s.size() ; i++){

            int ch = s[i];        // TC = O(N); BUT THE SC ISN'T GOOD IN'S CONSIST INEGER 4BYTE
            if(ch>=65 && ch<=90 ){
                int chr = s[i]-'A'-3;
                s[i] = ch-'A' +'a';
            }


            // char  ch =s[i];                     // TC = O(N); BUT THE SC ISN'T GOOD IN'S CONSIST CHAR 1 BYTE
            // if(ch>='A' && ch<= 'Z'){s[i] = ch - 'A' +'a';}
            // else{
            //     continue;
            // }
        }
        return s;
        
    }
};