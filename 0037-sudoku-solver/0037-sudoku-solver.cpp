class Solution {
public:
    bool isValid(int r , int c , int dgt , vector<vector<char>>& board){
        // vertically and horizontal
        for(int i = 0 ; i<9 ; i++){
            if(board[i][c]==dgt){return false;}
             if(board[r][i]==dgt){return false;}
        }
        // 3x3 grid board
        int strow = (r/3)*3;
        int stcol = (c/3)*3;
        for(int i = strow ; i<=strow + 2 ; i++){
            for(int j = stcol ; j<=stcol+2 ; j++){
                if(board[i][j]==dgt){
                    return false;
                }
            }
        }

        return true;

    }
   bool solution(vector<vector<char>>& board){
        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
                if(board[i][j] == '.'){
                    for(char d = '1' ; d<= '9' ; d++){
                        if(isValid(i,j,d,board)){
                            board[i][j] = d;
                            if(solution(board)==true){
                                return true;
                            }
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;

    }
    void solveSudoku(vector<vector<char>>& board) {
        solution(board);
        
    }
};