class Solution {
    public int maxProduct(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }

        int maxProductSoFar = nums[0];
        int minProductSoFar = nums[0];
        int maxProduct = nums[0];

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < 0) {
                int temp = maxProductSoFar;
                maxProductSoFar = minProductSoFar;
                minProductSoFar = temp;
            }

            maxProductSoFar = Math.max(nums[i], maxProductSoFar * nums[i]);
            minProductSoFar = Math.min(nums[i], minProductSoFar * nums[i]);

            maxProduct = Math.max(maxProduct, maxProductSoFar);
        }

        return maxProduct;
    }
}
