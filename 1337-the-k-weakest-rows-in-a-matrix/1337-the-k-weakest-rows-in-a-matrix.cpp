class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int  m = mat.size();
        int n = mat[0].size();
        int sumt = 0;
        priority_queue<pair<int,int>> pq;
        for(int i = 0 ; i< m ; i++){
            for(int j = 0 ; j<n ; j++){
                sumt+=mat[i][j];
            }
            pq.push({sumt , i});

            if(pq.size() > k){
                pq.pop();
            }
            sumt = 0;
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};