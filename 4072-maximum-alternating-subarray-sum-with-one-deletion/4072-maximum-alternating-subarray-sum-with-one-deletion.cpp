class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        const long long NEG = -(1LL << 60);
        vector<long long> plus(n), minus(n);

        plus[0] = nums[0];
        minus[0] = NEG;  

        for (int i = 1; i < n; i++) {
            plus[i] = max(
                (long long)nums[i],
                minus[i - 1] + nums[i]
            );

            minus[i] = plus[i - 1] - nums[i];
        }
        vector<long long> rplus(n), rminus(n);

        rplus[n - 1] = nums[n - 1];
        rminus[n - 1] = -nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            rplus[i] = max(
                (long long)nums[i],
                nums[i] + rminus[i + 1]
            );

            rminus[i] = max(
                (long long)-nums[i],
                -nums[i] + rplus[i + 1]
            );
        }

        long long ans = NEG;

        for (int i = 0; i < n; i++) {
            ans = max(ans, plus[i]);
            ans = max(ans, minus[i]);
        }

        for (int i = 1; i < n - 1; i++) {
            ans = max(ans, plus[i - 1] + rminus[i + 1]);
            ans = max(ans, minus[i - 1] + rplus[i + 1]);
        }

        return ans;
        
    }
};