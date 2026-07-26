class Solution {
public:
    vector<vector<int>> result;

    void subset(vector<int>& nums, int i, vector<int>& temp){
        result.push_back(temp);   
        for(int j = i; j < nums.size(); j++){

            
            if(j > i && nums[j] == nums[j-1]) continue;

            temp.push_back(nums[j]);     
            subset(nums, j+1, temp);     
            temp.pop_back();             
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());   
        vector<int> temp;
        subset(nums, 0, temp);
        return result;
    }
};