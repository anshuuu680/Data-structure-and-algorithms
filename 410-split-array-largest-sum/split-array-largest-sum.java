class Solution {

    private boolean isPossible(int[] nums,int k,int mid){
        int parts = 1;
        int sum = 0;

        for(int i=0;i<nums.length;i++){
            if(sum+nums[i] > mid){
                parts++;
                sum = nums[i];

                if(parts>k)
                return false;
            }else
            sum+= nums[i];
        }

        return true;
    }

    public int splitArray(int[] nums, int k) {

        int low = 0;
        int high = 0;

        for(int num:nums){
            high+=num;
             low = Math.max(low, num);
        }

        while(low<high){
         int mid = low + (high - low)/2;

         if(isPossible(nums,k,mid))
         high = mid;
         else
         low = mid+1;
        }

        return low;
        
    }
}