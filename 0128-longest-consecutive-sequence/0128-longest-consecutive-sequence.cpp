class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        set<int> s;
        for(int x : nums) {
            s.insert(x);
        }
        int ans = 1;
        int count = 1;
        auto it = s.begin();
        auto prev = it;
        it++;
        while(it != s.end()) {
            if(*it == *prev + 1) {
                count++;
                ans = max(ans, count);
            }
            else {
                count = 1;
            }
            prev = it;
            it++;
        }
        return ans;
    }
};