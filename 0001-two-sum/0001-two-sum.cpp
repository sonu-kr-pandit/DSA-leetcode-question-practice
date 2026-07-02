class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int st = 0;
        // int end = nums.size() - 1;
        // while(st<=end){
        //     int currsum = nums[st] + nums[end];
        //     if(abs(currsum) == abs(target)){   
        //         return {st , end};
        //     }
        //     else if(abs(currsum) > abs(target)){
        //         end--;
        //     }else{
        //         st++;
        //     }   
        // }
        // return {st , end};
    
        vector<pair<int , int>> arr;
        for(int i = 0 ; i< nums.size() ; i++){
            arr.push_back({nums[i] , i});
        }
        sort(arr.begin() , arr.end());
        int st = 0 ; 
        int end = arr.size()-1;
        while(st<=end){
            int currsum = arr[st].first + arr[end].first ; 
            if(currsum == target){
                return {arr[st].second ,arr[end].second};
            }
            else if(currsum > target){
                end--;
            }
            else{
                st++;
            }
        }
        return {};

        




    }
};