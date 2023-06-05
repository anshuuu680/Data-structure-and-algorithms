class Solution {

  int solve(vector<int>& obs,int currlane,int currpos, vector<vector<int>> &dp){
      if(currpos == obs.size()-1)
      return 0;

      if(dp[currlane][currpos]!=-1)
      return dp[currlane][currpos];


          int ans = INT_MAX;

      if(obs[currpos+1]!=currlane){
          return solve(obs,currlane,currpos+1,dp);
      }else{

          for(int lane =1;lane <=3;lane++){
              if(lane!=currlane && obs[currpos]!=lane){
                 ans = min(ans,1+solve(obs,lane,currpos,dp));
              }
          }
      }


   return dp[currlane][currpos] =  ans;




  }

//   int solvetab(vector<int>& obs){


//   }


public:
    int minSideJumps(vector<int>& obstacles) {
     vector<vector<int>> dp(4,vector<int>(obstacles.size(),-1));
        int currlane = 2;
        int currpos = 0;

        return solve(obstacles,currlane,currpos,dp);
        
    }
};