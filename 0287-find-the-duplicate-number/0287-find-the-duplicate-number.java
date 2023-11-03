class Solution {
    public int findDuplicate(int[] nums) {
          int l =1;
        int h = nums.length-1;
        int count;

        while(l<=h){
           int mid = l +(h-l)/2;
            count=0;

            for(int i=0;i<nums.length;i++)
           { 
            if(nums[i]<=mid)
            count++; 
            }

            if(count<=mid)
            l = mid+1;
            else
            h = mid - 1;
        }

       

        return l; 

      
    
    }
}