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
        // **********method 1 ,TC = O(N^2); brute force method****************//
        // vector<int> ans;
        // for(int i = 0 ; i< nums.size();  i++){
        //     int IS = solution(nums , i);
        //     ans.push_back(IS);
        // }
        // for(int i  = 0; i < ans.size() ; i++){
        //     if(ans[i] <= k ){
        //         return i;
        //     }
        // }
        // return -1;
        //************* method 2 , TC = O(N) ; *****************************//

        vector<int> minEL(nums.size());
        int minIND = INT_MAX;
        for(int i = nums.size()-1 ; i>= 0 ; i--){
            minIND = min(nums[i] , minIND);
            minEL[i] = minIND;
        }
        int Max = INT_MIN;
        for(int i = 0 ; i< nums.size() ; i++){
            Max = max(Max , nums[i]);
            int Min = minEL[i];
            if(Max - Min <= k) return i;
        }
        return -1;
    }
};