class Solution {
public:
    bool check(vector<int>& nums) {
        int idx = 0;
        while(idx<nums.size()-1){
            if(nums[idx]>nums[idx+1]){
                break;
            }
            idx++;
        }
        for(int i = idx+1; i <nums.size()-1; i++){
            // if(nums[idx]<=nums[i]){return false;}
            if(nums[i]>nums[i+1] ){return false;}
          
            // if({return false;}
        }
        if(idx!=nums.size()-1 && nums[nums.size()-1]>nums[0]){return false;}
        return true;
        
    }
};