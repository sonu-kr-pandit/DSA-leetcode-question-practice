class Solution {
public:
    vector<vector<int>> ans;
    // vector<int> temp;
    void combination(int i , int k ,vector<int>& temp , int n){
        if(k==0){
            ans.push_back(temp);
            return ;
        }
        if(i>n){return;}
        temp.push_back(i);
        combination(i+1 , k-1 , temp,n);
        temp.pop_back();
        combination(i+1 , k , temp,n);

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        combination(1 , k , temp , n);
        return ans;


        
    }
};