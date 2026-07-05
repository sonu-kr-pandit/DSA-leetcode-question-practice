class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n>0){
            if(!(n&1)){
                // count++;
                n=n>>1;
            }else{
                count++;
                n=n>>1;
            }
        }
        // while(n>0){
        //     int lg = n&1;
        //     count+=lg;
        //     n = n>>1;
        // }
        return count;
        
    }
};