class Solution {

//  int solve(int n, vector<int>&dp){
     
//      if(n==0)
//      return 0;

//      if(dp[n]!=-1)
//      return dp[n];

//      int ans = INT_MAX;

//      for(int i=1;i*i<=n;i++)
//          ans = min(ans,1+solve(n-i*i,dp));
     

//      return dp[n]=ans;

//  }

int solve(int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i * i <= k; i++) {
            dp[k] = min(dp[k], 1 + dp[k - i * i]);
        }
    }
    return dp[n];
}

public:
    int numSquares(int n) {

        // vector<int>dp(n+1,-1);

        return solve(n);
        
    }
};