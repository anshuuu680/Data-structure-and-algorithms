class Solution {

    private boolean isPossible(int[] nums, int threshold, int mid) {
        int sum = 0;

        for (int i = 0; i < nums.length; i++) {
            sum += (nums[i] + mid - 1) / mid;
        }

        return sum <= threshold;
    }

    public int smallestDivisor(int[] nums, int threshold) {
        int low = 1;
        int high = Arrays.stream(nums).max().getAsInt();

       

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (isPossible(nums, threshold, mid)) {
                high = mid; 
            } else {
                low = mid + 1; 
            }
        }

        return low;
    }
}
