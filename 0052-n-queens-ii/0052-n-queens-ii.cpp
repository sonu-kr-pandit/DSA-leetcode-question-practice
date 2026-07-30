class Solution {
public:

    int count = 0;

    // METHOD - 01

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










    //  METHOD 2


    // unordered_set<int> Dig;
    // unordered_set<int> A_Dig;
    // unordered_set<int> colm;

    // void solution(int n, int row, vector<string>& board) {

    //     if (row >= n) {
    //         count++;
    //         return;
    //     }

    //     for (int col = 0; col < n; col++) {

    //         int Dconst = col + row;
    //         int A_Dconst = row - col;

    //         if (Dig.find(Dconst) != Dig.end() ||
    //             A_Dig.find(A_Dconst) != A_Dig.end() ||
    //             colm.find(col) != colm.end()) {
    //             continue;
    //         }

    //         Dig.insert(Dconst);
    //         A_Dig.insert(A_Dconst);
    //         colm.insert(col);
    //         board[row][col] = 'Q';

    //         solution(n, row + 1, board);

    //         Dig.erase(Dconst);
    //         A_Dig.erase(A_Dconst);
    //         colm.erase(col);
    //         board[row][col] = '.';
    //     }
    // }

    // int totalNQueens(int n) {
    //     vector<string> board(n, string(n, '.'));
    //     solution(n , 0 , board);
    //     return count;
    // }
    




};