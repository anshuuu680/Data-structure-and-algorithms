class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {

        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++)
        {
            int sr=indices[i][0]; 
            int cr=indices[i][1];
            
            
            for(int j=0;j<m;j++)
            {
               ans[j][cr]+=1;
            }
            for(int k=0;k<n;k++)
            {
               ans[sr][k]+=1;
            }
        }
        
      int count=0;
      for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
              if(ans[i][j]%2!=0)
              count++;
          }
      }

      return count;

    }
};