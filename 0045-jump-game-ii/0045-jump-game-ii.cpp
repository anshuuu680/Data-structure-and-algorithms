class Solution {
    
    int solve(vector<int>&nums,int pos,vector<int>&dp){
        if(pos>=nums.size()-1)
        return 0;


        int minj =10001;

        if(dp[pos]!=-1)
        return dp[pos];



        for(int i=1;i<=nums[pos];i++){

            minj = min(minj,1+solve(nums,pos+i,dp));

        }

        return dp[pos] = minj;
    }



public:
    int jump(vector<int>& nums) {

        vector<int>dp(nums.size(),-1);

        return solve(nums,0,dp);

        
    }
};