class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int Reach =  0 ;
        for(int i = 0 ; i < n ; i++){
            if( i > Reach){
                return false;
            }
            Reach =  max( Reach,i+nums[i]);
        }
        return true;
        
    }
};