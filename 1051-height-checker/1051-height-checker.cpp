class Solution {
public:
    int heightChecker(vector<int>& ht) {
        int count = 0;
        vector<int> copy(ht.size());
        for(int i = 0 ; i< ht.size() ; i++){
            copy[i] = ht[i];
        }
        sort(copy.begin() , copy.end());
        for(int i = 0 ; i<ht.size() ;i++){
            if(ht[i]!=copy[i]){count++;}
        }
        return count;
        
        
        
    }
};