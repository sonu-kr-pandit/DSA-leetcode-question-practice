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
                // vector<int> temp;
                // temp.push_back(arr[i]);
                // temp.push_back(arr[i + 1]);
                ans.push_back({arr[i] , arr[i+1]});
                minCmp = diff;
            } else {
                if (diff < minCmp) {
                    ans.clear();
                    // vector<int> temp;
                    // temp.push_back(arr[i]);
                    // temp.push_back(arr[i + 1]);
                    // ans.push_back(temp);
                     ans.push_back({arr[i] , arr[i+1]});
                    minCmp = diff;
                } else if (diff == minCmp) {
                    // vector<int> temp;
                    // temp.push_back(arr[i]);
                    // temp.push_back(arr[i + 1]);
                    // ans.push_back(temp);
                     ans.push_back({arr[i] , arr[i+1]});
                }
            }
        }
        return ans;
    }
};