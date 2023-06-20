class Solution {

// int solve(int index,int diff,vector<int>nums,unordered_map<int,int>dp[]){
//     if(index<0)
//     return 0;

//    if(dp[index].count(diff))
//    return dp[index][diff];

//     int ans = 0;
//     for(int j = index-1;j>=0;j--){
//         if(nums[index]-nums[j]==diff)
//         ans = max(ans,1+solve(j,diff,nums,dp));
//     }

//     return dp[index][diff]=ans;
// }




public:
    int longestArithSeqLength(vector<int>& nums) {

        if(nums.size()<=2)
        return nums.size();

        // unordered_map<int,int>dp[nums.size()+1];

         int n = nums.size();
        int result = 0;
        vector<unordered_map<int, int>> dp(n);
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int diff = nums[i]-nums[j];
                dp[i][diff] = dp[j].count(diff) > 0 ? dp[j][diff] + 1 : 2;
                result = max(result, dp[i][diff]);
            }
        }
        return result;
        
        // for(int i=0;i<nums.size();i++){
        //     for(int j =i+1;j<nums.size();j++){
        //         ans = max(ans ,2+solve(i,nums[j]-nums[i],nums,dp));
        //     }
        // }
    }
};