class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k== 1){return  0;}
        int ans = INT_MAX;
        sort(nums.begin() , nums.end());
        for(int i =0 ; i<= nums.size() - k  ; i++){
            int diff = nums[i+k-1]- nums[i];
            ans = min(ans , diff);
        }
        return ans;
        
    }
};