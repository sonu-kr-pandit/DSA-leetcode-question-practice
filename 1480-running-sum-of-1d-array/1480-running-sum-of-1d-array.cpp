class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int min = 0;
        vector<int> ans(n);
        for(int i = 0 ; i<n ; i++){
            ans[i] = min + nums[i];
            min = ans[i];
        }
        return ans;
        
    }
};