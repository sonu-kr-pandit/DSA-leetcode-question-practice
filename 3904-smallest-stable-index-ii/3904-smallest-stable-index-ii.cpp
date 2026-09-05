class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> minEL(nums.size());
        int minIND = INT_MAX;
        for (int i = nums.size() - 1; i >= 0; i--) {
            minIND = min(nums[i], minIND);
            minEL[i] = minIND;
        }
        int Max = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            Max = max(Max, nums[i]);
            int Min = minEL[i];
            if (Max - Min <= k)
                return i;
        }
        return -1;
    }
};