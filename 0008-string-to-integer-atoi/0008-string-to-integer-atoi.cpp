class Solution {
public:
    int myAtoi(string s) {
        int num = 0;
        int sign = 1;
        bool started = false;
        for(int i = 0; i< s.size() ; i++){
            if( s[i]==' ' && !started){continue;}
            else if(s[i]=='-' && !started ){
                sign = -1;
                started = true;
            }
            else if(s[i]=='+' && !started ){
                sign = +1;
                started = true;
            }
            else if(s[i]>= '0' && s[i]<='9'){
                started = true;
                int digit = s[i] - '0';
                if(num > (INT_MAX - digit)/10){
                    if(sign==1){return INT_MAX;}
                    else{return INT_MIN;}
                }

                num = num*10 + digit;
            }
            else{ break;}
        }
        return sign*num;
        
    }
};