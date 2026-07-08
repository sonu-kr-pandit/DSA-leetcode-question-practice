class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){return 1;}

        // int count = 0;
        // int ans = 0;
        // while (n) {
        //     int r = n % 2;
        //     ans = ans + (pow(2,count)*!r);
        //     n = n / 2;
        //     count++;
        // }
        // return ans;

        int mask = 1;
        while(mask<n){
            mask = (mask<<1)|1;
        }
        return mask^n;
    }
};