class Solution {

    bool isSafe(vector<vector<char>>& board,int row,int col,char ch){
        for(int i=0;i<board.size();i++){
            if(board[i][col]==ch)
            return false;
            if(board[row][i]==ch)
            return false;
        }

        int sr = (row/3)*3;
        int sc = (col/3)*3;

        for(int i=sr;i<sr+3;i++){
            for(int j=sc;j<sc+3;j++){
                if(board[i][j]==ch)
                return false;
            }
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(char ch='1';ch<='9';ch++){
                        if(isSafe(board,i,j,ch)){
                            board[i][j] = ch;
                            if(solve(board))
                            return true;
                            else
                            board[i][j]= '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }


public:
    void solveSudoku(vector<vector<char>>& board) {
             if(board.size()==0)
             return;

             solve(board); 
    }
};