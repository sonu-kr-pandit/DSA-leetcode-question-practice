class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> mp;
        int cnt = 0;
        int n = digits.size();
        for(int i = 0 ; i<n; i++){
           
            for(int j  = 0 ; j < n ; j++){
                 if(j == i) continue;
                for(int k = 0 ; k<n ;k++){
                    if(j == k || k == i) continue;
                    int num = ( digits[i]*10 + digits[j] )*10 + digits[k];
                    if(num%2 == 0 && num > 99){
                        if(mp.find(num)==mp.end()){
                            mp.insert(num);
                            cnt++;
                        }
                    } 
                }
            } 
        }
        return cnt;
        
    }
};