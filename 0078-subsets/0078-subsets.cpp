class Solution {
public:
    vector<vector<int>> result;
    void subset(vector<int> & nums ,int i , vector<int> &temp){

        if(i ==nums.size()){
            result.push_back(temp);
            return ;
        }
        temp.push_back(nums[i]);
        subset(nums , i+1 , temp);
        temp.pop_back();
        subset(nums , i+1 , temp);


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        subset(nums , 0 , temp);
        return result;


        
    }
};