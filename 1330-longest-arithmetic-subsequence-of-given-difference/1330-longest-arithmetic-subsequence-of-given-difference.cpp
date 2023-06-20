
class Solution {
public:
   int longestSubsequence(vector<int>& nums, int difference) {
  
   unordered_map<int,int>dp;

    int ans = 0;


    for(int i=0;i<nums.size();i++){
        int temp = nums[i] - difference;
        int tempAns = 0;

        if(dp.count(temp))
        tempAns = dp[temp];

        dp[nums[i]]=1 + tempAns;
        ans=max(ans,dp[nums[i]]);

    }


return ans;

}

};