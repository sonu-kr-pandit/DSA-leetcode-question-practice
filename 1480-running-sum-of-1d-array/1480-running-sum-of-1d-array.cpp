class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        // int min = 0;
        vector<int> ans(n);
        for(int i = 0 ; i<n ; i++){
            if(i<1){
                ans[i] = nums[i];
            }
            // ans[i] = min + nums[i];
            // min = ans[i];
            else{
                ans[i] = ans[i-1]+ nums[i];
            }
        }
        return ans;
        
    }
};