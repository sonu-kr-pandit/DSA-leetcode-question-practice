class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        // vector<vector<int>> array;
        // int count = 1;
        // for(int i =0 ; i<n ; i++) {
        //     for(int j =0 ; j<n ; j++){
        //         array[i][j] = count;
        //         count++;
        //     }
        // }
        vector<vector<int>> array(n , vector<int> (n));
        int srow = 0;
        int scol =0; 
        int ecol = n-1;
        int  erow = n-1;
        int count = 1;
        while(srow<=erow && scol<= ecol){
            for(int i = scol ; i <= ecol ; i++) {
                array[srow][i] = count;
                count++; 
            }  
            for(int i = srow+1 ; i<=erow  ; i++) {
                array[i][ecol] = count;
                 count++; 
            }  
            for(int i = ecol-1 ; i>= scol ; i--) {
                if(erow==srow){break;}
                array[erow][i] = count;
                 count++; 
            }  
            for(int i = erow-1 ; i>= srow+1 ; i--) {
                if(ecol==scol){break;}
                array[i][scol] = count;
                 count++; 
            } 
            srow++;
            scol++;
            erow--;
            ecol--;
                  
        }
        return array;       
    }
};