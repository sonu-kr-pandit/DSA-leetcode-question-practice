class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // vector<vector<int>> ans(n , vector<int> (n));                     //  method  1 good tc but bad sc
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

        // for(int i = 0; i< n ; i++){                                // good tc but still bad sc
        //     for(int j = i+1 ; j <n ; j++){
        //         swap(matrix[i][j] , matrix[j][i]);
        //     }
        // }
        // for(int i = 0 ; i<n ; i++){               // reverse the row
        //  int st =0;
        //  int end = n-1;
        //  while(st<end){
        //      swap(matrix[i][st] , matrix[i][end]);
        //      st++;
        //      end--;
        //  }
        // }
        for(int i = 0; i< n ; i++){                        // good tc and good sc
         for(int j = i+1 ; j <n ; j++){
             swap(matrix[i][j] , matrix[j][i]);
         }}
        
        for(int i = 0 ; i<n ; i++){               // reverse the row
            reverse(matrix[i].begin() , matrix[i].end());
        }
    }
};