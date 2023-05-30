class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // search rows
        for (int i = 0; i < 9; i++){
            vector <char> curLine = board[i];
            sort(curLine.begin(), curLine.end());
            for (int j = 0; j < curLine.size()-1; j++){
                if ((isdigit(curLine[j]) && isdigit(curLine[j+1])) && curLine[j] == curLine[j+1]){
                    cout << "rows have repetition" << endl;
                    return false;
                }
            }
        }

        //search columns
        for (int i = 0; i < 9; i++){
            vector <char> columnBoard;
            for (int j = 0; j < 9; j++){
                columnBoard.push_back(board[j][i]);
            }
            sort(columnBoard.begin(), columnBoard.end());
            for (int z = 0; z < columnBoard.size()-1; z++){
                 if ((isdigit(columnBoard[z]) && isdigit(columnBoard[z+1])) && columnBoard[z] == columnBoard[z+1]){
                    cout << "columns have repetition" << endl;
                    return false;
                }
            }
        }
        

        // search 3x3s
        for(int i = 0; i < 9; i += 3) { 
	        for(int j = 0; j < 9; j += 3) {
	            vector<char> curBlock;
	            for(int k = 0; k < 3; k++) {
	                for(int l = 0; l < 3; l++) {
	                    curBlock.push_back(board[i+k][j+l]);
	                }
                    sort(curBlock.begin(), curBlock.end());
                    for (int z = 0; z < curBlock.size()-1; z++){
                        if ((isdigit(curBlock[z]) && isdigit(curBlock[z+1])) && curBlock[z] == curBlock[z+1]){
                            cout << "3x3s have repetition" << endl;
                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};
