class Solution {
public:
    vector<vector<int>> ans;

    void combination(vector<int>& cand, int k, vector<int>& temp, int i) {
        if (k == 0) {
            ans.push_back(temp);
            return;
        }

        for (int j = i; j < cand.size(); j++) {

            if (j > i && cand[j] == cand[j - 1]) continue;

            if (cand[j] > k) break;

            temp.push_back(cand[j]);
            combination(cand, k - cand[j], temp, j + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        combination(candidates, target, temp, 0);
        return ans;
    }
};
