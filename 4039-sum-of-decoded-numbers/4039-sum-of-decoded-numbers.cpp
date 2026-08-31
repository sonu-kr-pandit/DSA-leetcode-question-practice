class Solution {
public:
    long long modpow(long long base, long long exp, long long mod) {
        base %= mod;
        long long result = 1;
        while (exp > 0) {
            if (exp & 1)
                result = (result * base) % mod;
            base = (base * base) % mod;
            exp >>= 1;
        }
        return result;
    }

    int sumDecoded(vector<long long>& nums) {
        long long ans = 0;
        const int m = 1e9 + 7;

        for (int i = 0; i < nums.size(); i++) {
            int width = nums[i] % 10;
            long long di = floor(nums[i]/10);
            string s = to_string(di);
            long long x = stoll(s.substr(0, width));
            long long y = stoll(s.substr(width));
            ans = (ans + modpow(x, y , m)) % m;
        }
        return ans;
    }
};