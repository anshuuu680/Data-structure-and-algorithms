public class Solution {
    public void solveSudoku(char[][] board) {
        if(board == null || board.length == 0)
            return;
        solve(board);
    }
    
    public boolean solve(char[][] board){
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[0].length; j++){
                if(board[i][j] == '.'){
                    for(char c = '1'; c <= '9'; c++){
                        if(isSafe(board, i, j, c)){
                            board[i][j] = c;  
                            if(solve(board))
                                return true; 
                            else
                                board[i][j] = '.';
                        }
                    }
                    
                    return false;
                }
            }
        }
        return true;
    }
    
     private boolean isSafe(char[][] board, int row, int col, char c){

            for(int i=0;i<board.length;i++){
              if(board[i][col]==c)
                return false;
              if(board[row][i]==c)
                return false;
              
            }

     int sr = (row/3)*3;
     int sc = (col/3)*3;

     for(int i=sr;i<sr+3;i++){
       for(int j=sc;j<sc+3;j++){
         if(board[i][j]==c)
           return false;
       }
     }
     return true;
    }
}