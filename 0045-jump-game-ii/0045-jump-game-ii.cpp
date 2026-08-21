class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size() , reach = 0 , lastIdx = 0  , jump = 0;
        if(n == 1){return 0;}
        for(int i = 0 ; i<n ; i++){
            reach = max(reach , i + nums[i]);
            if(i == lastIdx){
                lastIdx = reach;
                jump++;

                if(reach >= n-1){
                    return jump;
                }
            }
        }
        return jump;
        
    }
};