class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;
        
        vector<long long> last(26, 0); // last contribution
        long long total = 1; // empty subsequence
        
        for (char ch : s) {
            long long newTotal = (2 * total % MOD - last[ch - 'a'] + MOD) % MOD;
            
            // update last contribution
            last[ch - 'a'] = total;
            
            total = newTotal;
        }
        
        // remove empty subsequence
        return (total - 1 + MOD) % MOD;
    }
};