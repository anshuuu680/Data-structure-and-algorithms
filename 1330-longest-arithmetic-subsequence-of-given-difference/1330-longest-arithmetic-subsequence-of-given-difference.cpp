
class Solution {
public:
   int longestSubsequence(vector<int>& nums, int difference) {
    unordered_map<int, int> dp;
    int result = 1;

    for (int num : nums) {
        dp[num] = dp[num - difference] + 1;
        result = max(result, dp[num]);
    }

    return result;
}

};