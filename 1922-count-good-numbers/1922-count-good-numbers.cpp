class Solution {
public:
    int M = 1000000007;
    long long findpower(int a , long long b){
        if(b==0){return 1;}
        long long half = findpower(a , b/2);
        long long result = (half*half)%M;
        if(b%2==1){
            result = (a*result)%M;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        return (findpower(5 , (n+1)/2) * findpower(4 , n/2)) %M;
    }
};