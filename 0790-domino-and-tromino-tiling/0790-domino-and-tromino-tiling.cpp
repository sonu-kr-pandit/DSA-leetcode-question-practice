class Solution {
public:
    int M = 1000000007;
    int store[1001];
    int solve(int n ){
        if(n==1 || n==2){return n;}
        if(n==3){return 5;}
        if(store[n]!=-1){return store[n];}
        return store[n] = (2*solve(n-1)%M +solve(n-3)%M )%M;
    }
    int numTilings(int n) {
        memset(store, -1, sizeof(store));
        return solve(n);


        
    }
};