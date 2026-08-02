class Solution {
public:
    int m , n ;
    vector<vector<int>> directions{{1,0},{-1,0},{0,1},{0,-1}};

    bool find(vector<vector<char>>& board,int r ,int c , int idx , string word){
        if(idx==word.size()){return true;}

        if(r < 0 || c < 0 || r>= m || c>= n || board[r][c] == '$' ){return false;}

        if(board[r][c] != word[idx] ){return false;}

        char temp = board[r][c];
        board[r][c] = '$';

        for(auto &dir : directions){
            int new_i = r + dir[0];
            int new_j = c + dir[1];

            if(find(board , new_i , new_j , idx + 1 , word)){
                return true;
            }
        }

        board[r][c] = temp;
        return false;




    }

    bool exist(vector<vector<char>>& board, string word) {

        m = board.size();
        n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0] && find(board, i, j, 0, word)) {
                    return true;
                }
            }
        }
        return false;
    }
};