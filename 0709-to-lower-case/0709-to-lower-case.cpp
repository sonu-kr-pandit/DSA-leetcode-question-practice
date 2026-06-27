class Solution {
public:
    string toLowerCase(string& s) {
        for(int i = 0; i<s.size() ; i++){
            // if(s[i]-'a' >= 0 ){
            //     int chr = s[i]-'A'-3;
            //     s[i] = chr+'a';
            // }


            char  ch =s[i];
            if(ch>='A' && ch<= 'Z'){s[i] = ch - 'A' +'a';}
            else{
                continue;
            }
        }
        return s;
        
    }
};