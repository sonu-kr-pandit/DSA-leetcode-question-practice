class Solution {
public:
    int fibonnaci(int n ){
        if(n==0 | n==1){return n;};
        return fibonnaci(n-1)+fibonnaci(n-2);
    }
    int fib(int n) {
        return fibonnaci(n);
        
    }
};