class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long N = n;
        if(n<0){
            x = 1/x;
            N = -N;
        }
        while(N>0){
            int ld = N&1;
            if(ld){
                ans = ans*x;
            }
            x = x*x;
            N = N>>1;
        }
        return ans;
        
        
    }
};