class Solution {
    public int findMin(int[] nums) {
        int low = 0;
        int high = nums.length - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[high]) {
                high = mid; // Pivot is on the left side (including mid)
            } else if (nums[mid] > nums[high]) {
                low = mid + 1; // Pivot is on the right side
            } else {
                high--; // Reduce the range to handle duplicates
            }
        }
        return nums[low];
    }
}
