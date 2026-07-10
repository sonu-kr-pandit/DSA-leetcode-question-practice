class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
        int xors = a^b;
        int cary = (a&b)<<1;
        a = xors;
        b = cary;
        }
        return a^b;
        
    }
};