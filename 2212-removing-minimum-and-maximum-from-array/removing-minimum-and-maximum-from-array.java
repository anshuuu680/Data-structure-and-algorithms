class Solution {
    public int minimumDeletions(int[] nums) {

        // find min and max

        int minIndex = 0;
        int maxIndex = 0;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }

            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }

        }

        // array length
        int n = nums.length;

       // find mini and maxi 

       int mini = Math.min(minIndex,maxIndex);
       int maxi = Math.max(minIndex,maxIndex);


       // for right we need to do length - position

       int way1 = n - mini;  // deleting from right 

       int way2 = maxi + 1;  // deleting from left 

       int way3 = mini + 1 + n - maxi;

       return Math.min(way3,Math.min(way1,way2));









       
    }
}