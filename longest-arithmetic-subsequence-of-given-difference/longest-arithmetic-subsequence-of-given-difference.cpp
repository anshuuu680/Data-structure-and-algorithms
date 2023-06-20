
class Solution {
public:
   int longestSubsequence(vector<int>& nums, int difference) {
  
   unordered_map<int,int>dp;

    int ans = 0;


    for(int i=0;i<nums.size();i++){
      dp[nums[i]]=dp[nums[i]-difference] + 1;
        ans=max(ans,dp[nums[i]]);
    }


return ans;

}

};