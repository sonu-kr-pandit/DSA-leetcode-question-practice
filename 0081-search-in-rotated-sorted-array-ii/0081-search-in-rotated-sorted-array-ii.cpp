class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int n = nums.size();
        // for(int i = 0 ; i<= n-1; i++){      // linear TC
        //     if(nums[i]==k){return true;}
        // }

        int st = 0;                      // binay TC
        int end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == k) {
                return true;
            }
            if (nums[st] == nums[mid]) {
                st++; 
                continue;
            }
            if (nums[st] <= nums[mid]) {
                if (nums[st] <= k && k < nums[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                if (nums[mid] < k && k <= nums[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return false;
    }
};