class Solution {
public:
    set<vector<int>> s;

    vector<vector<int>> ans;
    void combination(vector<int>& cand , int k , vector<int> &temp , int  i){
        if(i>=cand.size()||k<0){return ;}
        if(k==0){
            if(s.find(temp) == s.end()){
                ans.push_back(temp);
                s.insert(temp);
            }
            return;
        }
        temp.push_back(cand[i]);
        combination(cand , k-cand[i], temp , i+1);
        combination(cand , k-cand[i], temp , i);
        temp.pop_back();
        combination(cand , k,temp , i+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        combination(candidates , target , temp , 0);
        return ans;



        
    }
};