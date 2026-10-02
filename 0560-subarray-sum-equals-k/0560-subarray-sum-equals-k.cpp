class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int counter = 0 ;
        for(int i =0 ; i<nums.size() ; i++){
             int add = 0;
            for(int j = i; j<nums.size(); j++){
                add+= nums[j];
                if(add==k){counter++;
                }
            }
        }
        return counter;
    }
};