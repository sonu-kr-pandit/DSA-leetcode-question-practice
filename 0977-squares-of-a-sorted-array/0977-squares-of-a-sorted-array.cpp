class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i =0 ; i<nums.size() ; i++){
        //     // int temp = nums[i]*nums[i];
        //     // nums[i] = temp;
        //     nums[i] =  nums[i]*nums[i];
        // }
        // sort(nums.begin() , nums.end());
        // return nums

        vector<int> sqr(nums.size() , 0);
        int lf = 0;
        int rg = nums.size()-1;
        int idx = nums.size()-1;
        while(lf<=rg){
            if(abs(nums[lf])> abs(nums[rg])){
                sqr[idx] = nums[lf]*nums[lf];
                lf++;
            }else{
                sqr[idx] = nums[rg]*nums[rg];
                rg--;
            }
            idx--;
        }
        return sqr;

        
    }
};