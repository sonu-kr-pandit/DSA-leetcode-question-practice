class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int SPD =0;
        int SSD =0;
        for(int i = 0 ;i<mat.size() ; i++){
            SPD+= mat[i][i];
            if(i!=mat.size() -1 -i){
                SSD += mat[i][mat.size()-1-i];
            }
        }
        return SSD+SPD;
        
    }
};