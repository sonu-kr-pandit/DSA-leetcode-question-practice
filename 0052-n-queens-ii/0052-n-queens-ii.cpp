class Solution {
public:

    int count = 0;
    bool isValid(int row, int col, vector<string>& board, int n) {
        // upword
        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'Q') {
                return false;
            }
        } // digonally upward in right
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        // digonally upward in left
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }


    void solution(int n, int row, vector<string>& board) {
        if (row >= n) {
            count++;
            return;
        }
        for (int col = 0; col < n; col++) {
            if (isValid(row, col, board, n)) {
                board[row][col] = 'Q';
                solution(n, row + 1, board);
                board[row][col] = '.';
            }
        }
    }

    
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solution(n , 0 , board);
        return count;

    }
};