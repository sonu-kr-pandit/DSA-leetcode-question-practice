class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int , int> mp;
        for(int i = 0 ; i< n ; i++){
            if(mp.count(nums[i])){
                mp[nums[i]]++;
            }else{
                mp[nums[i]] = 1;
            }
        }
        int melement = 0;

        for(auto p :mp){
            if(p.second > n/2){
                melement = p.first;
                break;
            }
        }
        return melement;
        
    }
};