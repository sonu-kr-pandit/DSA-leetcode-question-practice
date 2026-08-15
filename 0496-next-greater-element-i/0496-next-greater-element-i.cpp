class Solution {

public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> s;
        unordered_map<int, int> mp;  
        int n = nums2.size();
        s.push(nums2[n-1]);
        mp[nums2[n-1]] = -1;  
        for(int idx = n-2; idx >= 0; idx--) {
            int curr = nums2[idx];
            while(!s.empty() && curr >= s.top()) {
                s.pop();
            }
            if(s.empty()) mp[curr] = -1;
            else mp[curr] = s.top();

            s.push(curr);}
        vector<int> ans;
        for(int x : nums1) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
}; 
