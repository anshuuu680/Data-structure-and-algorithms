class Solution {
    public int maxSubArray(int[] nums) {

        //Kadane's algorithm

        int max_so_far =  Integer.MIN_VALUE;
        int curr_sum = 0;

        for(int i=0;i<nums.length;i++){
            curr_sum+= nums[i];
            max_so_far = Math.max(max_so_far,curr_sum);
            if(curr_sum<0)
            curr_sum=0;
        }

        return max_so_far;
        
    }
}