class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> s1;
        set<int> s2;
        int n = nums1.size();
        int m = nums2.size();
        for (int i = 0; i < n; i++) {
            s1.insert(nums1[i]);
        }
        for (int i = 0; i < m; i++) {
            if (s1.count(nums2[i])) {
                s2.insert(nums2[i]);
            }
        }
        for (auto& it : s2) {
            ans.push_back(it);
        }
        return ans;
    }
};