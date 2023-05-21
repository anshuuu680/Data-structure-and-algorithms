class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == '1') ans += dfs(grid, i, j);
            }
        }
        return ans;
    }

    int dfs(vector<vector<char>>& gd, int i, int j){
        if(i<0 || j<0 || i>=gd.size() || j>=gd[0].size() || gd[i][j] == '0') return 0;
        
        if(gd[i][j] == '1') gd[i][j] = '0';

       dfs(gd, i-1, j);
       dfs(gd, i+1, j);
       dfs(gd, i, j-1);
       dfs(gd, i, j+1);
        
        return 1;
    }
};