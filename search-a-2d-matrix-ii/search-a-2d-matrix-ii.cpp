class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int r = matrix.size();
        int c = matrix[0].size();


        int row=0;
        int col=c-1;


        while(row < r && col>=0){
            if(matrix[row][col]==target)
            return 1;
            else if(target > matrix[row][col])
               row++;
         else
               col--;
        }


        return 0;
        
    }
};