class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) {
            return a[1] < b[1]; // sort by second element
        });
        int cnt = 1;
        int lastElement = pairs[0][1];


        for(int i = 1 ; i< n ; i++){
            if(pairs[i][0] > lastElement){
                cnt++;
                lastElement = pairs[i][1];
            }

        }


        return cnt;
    }
};