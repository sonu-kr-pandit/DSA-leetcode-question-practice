class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int counter = 0 ;
        // for(int i =0 ; i<nums.size() ; i++){
        //      int add = 0;
        //     for(int j = i; j<nums.size(); j++){
        //         add+= nums[j];
        //         if(add==k){counter++;
        //         }
        //     }
        // }

        unordered_map<int , int> mp;
        mp[0]  = 1;
        int n = nums.size();
        int result = 0;
        int currSum = 0;
        for(int i = 0 ; i< n ; i++){
            currSum += nums[i];
            if(mp.count(currSum-k)){
                result += mp[currSum-k];
                mp[currSum]++;
            }else{
                mp[currSum]++;
            }
        }
        return result;

    }
};