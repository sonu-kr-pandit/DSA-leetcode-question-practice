class Solution {
public:
    bool sorted(vector<int>& nums , int i ,int count){
        
        if(i==nums.size()){
            return count<=1;
        }
        if(nums[i]>nums[(i+1)%nums.size()]){
            count++;
        }
        if(count>1){
            return false;
        }
        return sorted(nums , i+1 , count);
    }
    bool check(vector<int>& nums) {
        return sorted(nums , 0 , 0);
    }
};