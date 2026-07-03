class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        for(int i  = 0 ; i< nums.size() ; i++){
            int st = i+1;
            int end = nums.size() - 1;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            // if(i>0 && nums[i]==nums[st]){continue;}
            while(st<end){
                int currsum = nums[i] + nums[st] + nums[end];
                if(currsum == 0 ){
                    ans.push_back({nums[i], nums[st], nums[end]});
                    st++;
                    end--;
                    // break;
                    while(st < end && nums[st] == nums[st-1]) st++;
                    while(st < end && nums[end] == nums[end+1]) end--;
                }
                else if(currsum < 0 ){
                    st++;
                }else{
                    end--;
                }
            }

        }
        return ans;

        
    }
};