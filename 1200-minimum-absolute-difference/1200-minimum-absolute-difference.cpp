class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        int minCmp = INT_MAX;
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n - 1; i++) {
            int diff = abs(arr[i + 1] - arr[i]);
            if (ans.empty()) {
                ans.push_back({arr[i] , arr[i+1]});
                minCmp = diff;
            } else {
                if (diff < minCmp) {
                    ans.clear();
                     ans.push_back({arr[i] , arr[i+1]});
                    minCmp = diff;
                } else if (diff == minCmp) {
                     ans.push_back({arr[i] , arr[i+1]});
                }
            }
        }
        return ans;
    }
};