class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int tgt) {
        int i =0;
        int n =  matrix[0].size();
        int j = n-1;
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

        // int m = matrix.size();
        // int n = matrix[0].size();
        // int st = 0 ;
        // int end = m*n -1;
        // while(st<=end){
        //     int mid = st + (end-st)/2;
        //     if(matrix[mid/n][mid%n]==tgt){return true;}
        //     else if(matrix[mid/n][mid%n]<tgt){

        //         st = mid+1;
        //     }else{
        //         end = mid-1;
        //     }
        // }
        // return false;

        
    }
};