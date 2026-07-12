// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long low = 0;
        long high = n;
        while(low<high){
            long mid = low + (high - low)/2;
            if(isBadVersion(mid)){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};