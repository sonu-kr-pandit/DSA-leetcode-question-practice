class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin() , nums.end());                    // nlog(n)  tc

        // for(int i = 0 ; i< n-1 ;i++){
        //     if(nums[i]==nums[i+1]){return true;}
        // }

        // return false;

        unordered_map<int, int> mp;                             // n tc

        for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) != mp.end()) {
                return true;
            }
            mp[nums[i]] = 1;
        }

        return false;
    }
};