class Solution {
public:
    int findMin(vector<int>& nums) {
        int st =0 ,end = nums.size()-1 , mid = 0;
        while(st < end){
           mid = st + (end - st)/2;
           if(nums[mid] > nums[end])st = mid+1;
           else if (nums[mid]==nums[end] && nums[mid]<=nums[st]){st++ , end--;}
           else end = mid;
        }
        return nums[st];
        
    }
};