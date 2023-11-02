class Solution {
    public int findNonMinOrMax(int[] nums) {


     int mini = Integer.MAX_VALUE;
      int maxi = Integer.MIN_VALUE;

        for(int i=0;i<nums.length;i++){
            
            mini = Math.min(mini,nums[i]);
            maxi = Math.max(maxi,nums[i]);
            
        }


        for(int i=0;i<nums.length;i++){
            if(nums[i]!=mini && nums[i]!=maxi)
            return nums[i];
        }

        return -1;
        
        
    }
}