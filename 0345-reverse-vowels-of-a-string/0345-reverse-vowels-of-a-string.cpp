class Solution {
public:  

    bool isVowel(char c){
        if(c== 'a' || c== 'e'|| c== 'i' || c== 'o' ||c== 'u'||
        c== 'A'||  c== 'E'||  c== 'I'||  c== 'O'||  c== 'U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string& s) {
        int st = 0;
        int end = s.size()-1;
        
        while(st<end){
           if(!isVowel(s[st])){ st++; continue;}
            if(!isVowel(s[end])){ end--; continue;}
            if(st<end){
                swap(s[st] , s[end] );
            }
            st++;
            end--;


           
        }


        // for(int i = 0 ; i< s.size() ; i++){
        //     if(s[i] == 'A'|| s[i] == 'E'|| s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U'){
        //         for(int j = end ; j>i ;j--){
        //             if(s[j] == 'A'|| s[j] == 'E'|| s[j] == 'I'|| s[j] == 'O'|| s[j] == 'U'){
        //                 swap(s[i],s[j]);                    
        //             }                    
        //         }
        //     }
        //     else{
        //         if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        //             for(int j = end ; j>=0 ; j++){
        //                 if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        //                     swap(s[i] , s[j]);
        //                 }
        //             }
        //         }
        //     }
        // }
        return s;
        
    }
};