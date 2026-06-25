class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // vector<vector<int>> ans(n , vector<int> (n));
        // for(int i =  0 ; i<n ; i++){               // transpose
        //     for(int j = 0 ; j< n ; j++){
        //         ans[j][i]= matrix[i][j];
        //     }
        // }
        // for(int i = 0 ; i<n ; i++){               // reverse the row
        //     int st =0;
        //     int end = n-1;
        //     while(st<end){
        //         swap(ans[i][st] , ans[i][end]);
        //         st++;
        //         end--;
        //     }
        // } 
        // for(int i =  0 ; i<n ; i++){               // assign the valu
        //     for(int j = 0 ; j< n ; j++){
        //         matrix[i][j] = ans[i][j];
        //     }
        // }

        for(int i = 0; i< n ; i++){
            for(int j = i+1 ; j <n ; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
           for(int i = 0 ; i<n ; i++){               // reverse the row
            int st =0;
            int end = n-1;
            while(st<end){
                swap(matrix[i][st] , matrix[i][end]);
                st++;
                end--;
            }
        } 

    }
};