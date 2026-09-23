class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> pq;
        vector<int> ans;
        unordered_map<int , int> mp;
        for(int &it:nums){
            mp[it]++;
        }
        for(auto &it : mp){
            int val = it.first;
            int freq = it.second;
            pq.push({freq , val});
            if(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};