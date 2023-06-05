class Solution {


  int solve(vector<int>v,int i,int j, vector<vector<int>>&dp){
      //Base case
      if(i+1==j)
      return 0;

      if(dp[i][j]!=-1)
      return dp[i][j];

    int mini = INT_MAX;

    for(int k = i+1;k<j;k++){
        mini = min(mini,v[i]*v[j]*v[k]+solve(v,i,k,dp)+solve(v,k,j,dp));
    }

    return dp[i][j] = mini;

  }



  int solvetab(vector<int>& v){
     vector<vector<int>>dp(v.size(),vector<int>(v.size(),0));

     for(int i=v.size()-1;i>=0;i--){
       for(int j=i+2;j<v.size();j++){
           
     int mini = INT_MAX;

    for(int k = i+1;k<j;k++){
        mini = min(mini,v[i]*v[j]*v[k]+dp[i][k]+dp[k][j]);
    }

     dp[i][j] = mini;

       }
     }

     return dp[0][v.size()-1];


  }

public:
    int minScoreTriangulation(vector<int>& values) {

      vector<vector<int>>dp(values.size()+1,vector<int>(values.size()+1,-1));

        // return solve(values,0,values.size()-1,dp);  

        return solvetab(values);      
    }
};