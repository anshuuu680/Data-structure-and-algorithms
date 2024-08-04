class Solution {
    public int findDuplicate(int[] nums) {
        int low = 1;
        int high = nums.length-1;
        
        while(low<=high){
         int count = 0;
        int mid = 0;

         for(int i=0;i<nums.length;i++){
             mid = low + (high - low)/2;


            // check how many elements are less than mid index

            if(nums[i]<=mid)
            count++;
         }

         // 1.condition 

         // if counted elements are less than mid index than we will check i           in the left portion

         if(count<=mid)
         low = mid + 1;
         else
         high = mid - 1;

           

        }


        return low;
        
    }
}