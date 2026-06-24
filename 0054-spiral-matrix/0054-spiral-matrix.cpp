class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        int srow = 0;
        int scol = 0;
        int erow = n-1;
        int ecol = m-1;
        // int idex = 0;
        while(srow<=erow && scol<=ecol){
            for(int i = scol ; i <=ecol ; i++){
                ans.push_back(matrix[srow][i]);
                // idex++;
            }
            for(int i = srow+1 ; i<=erow ; i++){
                ans.push_back(matrix[i][ecol]);
                // idex++;

            }
            for(int i = ecol-1 ; i>=scol ; i--){
                if(srow==erow){break;}
                ans.push_back(matrix[erow][i]);
                // idex++;
            }
            for(int i = erow -1 ; i>=srow+1 ; i--){
                if(scol == ecol){break;}
                ans.push_back(matrix[i][scol]);
                // idex++;
            }
            srow++;
            scol++;
            erow--;
            ecol--;

            
        }
        return ans;
        
    }
};