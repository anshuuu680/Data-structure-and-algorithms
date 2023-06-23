class Solution {

  


  int solve(vector<int>nums,int index,int prevEle,unordered_map<string,int>&dp){
    if(index==nums.size())
    return 0;

    string Key = to_string(index) + "#" + to_string(prevEle);

     if (dp.count(Key)) {
        return dp[Key];
    }


    int include=0;
    int exclude=0;

    // Include
    if(nums[index]>prevEle)
    include = 1 + solve(nums,index+1,nums[index],dp);

    exclude = solve(nums,index+1,prevEle,dp);

    return dp[Key] = max(include,exclude);
    
  }


public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        // unordered_map<string,int>dp;


      
        // return solve(nums,0,INT_MIN,dp);


        vector<int>dp(n,1);


        for(int i=1;i<n;i++){
          for(int j=0;j<i;j++){
            if(nums[i]>nums[j])
            dp[i] = max(dp[i],dp[j]+1);
          }
        }

         int maxLen = 0;
    for (int i = 0; i < n; i++) {
        maxLen = max(maxLen, dp[i]);
    }

    return maxLen;





    }
};