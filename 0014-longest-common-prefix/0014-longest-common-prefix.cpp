class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){return "";}
        string prf = strs[0];
        for(int i = 1 ; i<strs.size() ; i++){
            while(strs[i].find(prf)!=0){
                prf.pop_back();
                if(prf.empty()){return "";}
            }
        }
        return prf;
        
    }
};