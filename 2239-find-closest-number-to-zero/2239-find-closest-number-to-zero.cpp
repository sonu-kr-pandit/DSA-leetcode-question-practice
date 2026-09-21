class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        auto cmp = [](pair<int,int> a, pair<int,int> b) {
            if (a.first == b.first)
                return a.second < b.second;
            return a.first > b.first;
        };

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            decltype(cmp)
        > pq(cmp);

        for (int num : nums) {
            pq.push({abs(num), num});
        }

        return pq.top().second;
    }
};