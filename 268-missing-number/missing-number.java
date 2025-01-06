class Solution {
    public int missingNumber(int[] nums) {
         int n=nums.length;

        int ans= n*(2+(n-1));
        ans=ans/2;

        int sum=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
        }

        return ans-sum;
    }
}