import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<List<String>> solveNQueens(int n) {
        List<List<String>> ans = new ArrayList<List<String>>();
        
        char arr[][] = new char[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = '.';
            }
        }
        
        solve(ans, arr, 0);
        return ans;
    }
    
    private void solve(List<List<String>> ans, char[][] arr, int row) {
        if (row == arr.length) {
            List<String> solution = new ArrayList<>();
            for (char[] rowArr : arr) {
                solution.add(new String(rowArr));
            }
            ans.add(solution);
            return; 
        }

        for (int col = 0; col < arr.length; col++) {
            if (isSafe(arr, row, col)) {
                arr[row][col] = 'Q';
                solve(ans, arr, row + 1);
                arr[row][col] = '.';      // Backtracking
            }
        }
    }
    
    private boolean isSafe(char[][] arr, int row, int col) {
        for (int i = 0; i < row; i++) {
            if (arr[i][col] == 'Q') {
                return false;
            }
        }
        
        for (int i = row - 1, j = col + 1; i >= 0 && j < arr.length; i--, j++) {
            if (arr[i][j] == 'Q') {
                return false;
            }
        }
        
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (arr[i][j] == 'Q') {
                return false;
            }
        }
        
        return true;
    }
}
