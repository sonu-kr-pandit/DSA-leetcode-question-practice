class Solution {
public:
    bool isPresent(vector<int> &nums , int &tgt){
        for(int i = 0 ; i< nums.size() ; i++){
            if(tgt == nums[i]){return true;}
        }
        return false;
    }
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        // sort(nums.begin() , nums.end());
        int mint = INT_MAX;
        int maxt = INT_MIN;
        for(int i =0;i < nums.size() ; i++){
            mint = min(mint , nums[i]);
            maxt = max(maxt , nums[i]);
        }
        // int tgt = nums[0] +1 ;
        // int i = 0;
        int tgt = mint + 1;
        while(tgt < maxt){
            if(isPresent(nums  , tgt)==false){
                ans.push_back(tgt); 
            }
            tgt++;
        }
        return ans;

        
    }
};