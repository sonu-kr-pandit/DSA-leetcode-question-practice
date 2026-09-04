class Solution {
public:

    int solution(vector<int> nums , int i ){
        int maxIS = INT_MIN;
        int minIS = INT_MAX;
        for(int j = 0 ; j <=i ; j++){
            maxIS = max(maxIS , nums[j]);
        }

        for(int j = i ; j < nums.size() ; j++){
            minIS = min(minIS , nums[j]);
        }
        return maxIS - minIS ;
    }

    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i = 0 ; i< nums.size();  i++){
            int IS = solution(nums , i);
            ans.push_back(IS);
        }
        // int res = INT_MAX;
        for(int i  = 0; i < ans.size() ; i++){
            if(ans[i] <= k ){
                return i;
            }
        }



        return -1;
    }
};