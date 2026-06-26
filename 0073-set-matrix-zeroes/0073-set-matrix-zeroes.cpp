class Solution {
public:
    // vector<vector<int>> cvtzero(vector<vector<int>>& matrix , vector<vector<int>>& temp , int row , int col){
    //     int m = matrix.size();
    //     int n = matrix[0].size();
    //     for(int i= 0 ; i<m ; i++){
    //         matrix[i][col] == 0;
    //     }
    //      for(int j = 0 ; j <n ; j++){
    //         matrix[row][j] == 0;
    //     }
    //     return  matrix;

    // }
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> temp(m , vector<int> (n));
        for(int i = 0 ; i< m ; i++){
            for(int j =  0 ; j<n ; j++){
                temp[i][j] = matrix[i][j];
            }
        }
        for(int i = 0 ; i< m ; i++){
            for(int j =  0 ; j<n ; j++){
                if(matrix[i][j]==0 && temp[i][j] == 0){
                    for(int row= 0 ; row<m ; row++){
                         matrix[row][j] = 0;
                     }
                    for(int col = 0 ; col <n ; col++){
                        matrix[i][col] = 0;
                     }
                   
                }
            }
        }
        
    }
};