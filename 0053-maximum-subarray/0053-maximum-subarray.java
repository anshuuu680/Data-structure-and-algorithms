class Solution {
    public int maxSubArray(int[] nums) {

        int max_so_far =  Integer.MIN_VALUE;;
        int max_sum = 0;

        for(int i=0;i<nums.length;i++){
             max_sum+=nums[i];
             max_so_far = Math.max(max_sum,max_so_far);
             
             if(max_sum<0)
             max_sum = 0;
        }

        return max_so_far;


        
    }
}