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



 int solvetab(vector<int>& nums) {
    vector<int> dp(nums.size(), INT_MAX);  // Initialize with INT_MAX

    dp[nums.size() - 1] = 0;  // Set the last position as 0 since it's the end

    for (int pos = nums.size() - 2; pos >= 0; pos--) {
        int max_jump = min(pos + nums[pos], static_cast<int>(nums.size() - 1));
        for (int i = pos + 1; i <= max_jump; i++) {
            if (dp[i] != INT_MAX) {
                dp[pos] = min(dp[pos], 1 + dp[i]);
            }
        }
    }

    return dp[0];
}




public:
    int jump(vector<int>& nums) {

        // vector<int>dp(nums.size(),-1);

        // return solve(nums,0,dp);


        return solvetab(nums);

        
    }
};