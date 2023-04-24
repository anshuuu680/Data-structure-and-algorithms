class Solution {
public:
    vector<int> getRow(int rowIndex) {
         int n=rowIndex;
        vector<vector<int>>v(n+1);
        vector<int>ans;

     for(int i=0;i<=n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    v[i].push_back(1);
                }
                else{
                    v[i].push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
        }
       
        
        for(int i=0;i<v[n].size();i++){
            ans.push_back(v[n][i]);
        }

        return ans;
        
    }
};