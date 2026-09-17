class Solution {
public:
    int countOdds(int low, int high) {
        int st = low ; 
        int cnt =0;
        while(st<=high){
            if(st%2 != 0){
                cnt++;
            }
            st++;
        }
        return cnt;
        
    }
};