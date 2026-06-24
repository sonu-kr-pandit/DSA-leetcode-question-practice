class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int tgt) {
        int i =0;
        int j =  matrix[0].size()-1;
        while(j>=0 && i< matrix.size()){
            if(matrix[i][j]==tgt){
                return true;
            }else if(tgt<matrix[i][j]){
                j--;
            }else{
                i++;
            }
        }
        return false;
        
    }
};