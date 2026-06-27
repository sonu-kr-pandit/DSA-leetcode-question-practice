class Solution {
public:
    string toLowerCase(string& s) {
        for(int i = 0; i<s.size() ; i++){

            int ch = s[i];
            if(ch>=65 && ch<=90 ){
                int chr = s[i]-'A'-3;
                s[i] = ch-'A' +'a';
            }


            // char  ch =s[i];
            // if(ch>='A' && ch<= 'Z'){s[i] = ch - 'A' +'a';}
            // else{
            //     continue;
            // }
        }
        return s;
        
    }
};