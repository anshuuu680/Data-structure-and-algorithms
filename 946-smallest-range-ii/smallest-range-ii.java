class Solution {
    public int smallestRangeII(int[] nums, int k) {

        // sort the given array 
        Arrays.sort(nums); // O(nlogn)

        int tempMin = nums[0];
        int tempMax = nums[nums.length-1];

        int ans = nums[nums.length-1] - nums[0];

        for(int i=1;i<nums.length;i++){
         
            tempMin = Math.min(nums[0]+k,nums[i]-k);
            tempMax = Math.max(nums[nums.length-1] - k,nums[i-1] + k);
            ans = Math.min(ans,tempMax-tempMin);
            
        }

     return ans;
        
    }
}