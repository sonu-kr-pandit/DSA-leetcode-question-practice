class Solution {
public:
    bool isPresent(vector<int> &nums , int tgt){
        for(int i = 0 ; i< nums.size() ; i++){
            if(tgt == nums[i]){return true;}
        }
        return false;
    }
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin() , nums.end());
        int tgt = nums[0];
        // int i = 0;
        while(tgt < nums[nums.size()-1] ){
            
            if(!isPresent(nums  , tgt)){
                ans.push_back(tgt); 
            }
            tgt++;
            
        }
        return ans;

        
    }
};