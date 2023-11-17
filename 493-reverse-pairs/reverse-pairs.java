class Solution {

    public int reversePairs(int[] nums) {
        return mergeSort(nums, 0, nums.length - 1);
    }

    public int mergeSort(int[] nums, int low, int high) {
        int count = 0;
        if (low < high) {
            int mid = low + (high - low) / 2;

            count += mergeSort(nums, low, mid);
            count += mergeSort(nums, mid + 1, high);
            count += merge(nums, low, mid, high);
        }
        return count;
    }

    public int merge(int[] nums, int low, int mid, int high) {
        int count = 0;
        int[] temp = new int[high - low + 1]; // Temporary array to store merged values
        int left = low, right = mid + 1, index = 0;

        while (left <= mid && right <= high) {
            if ((long) nums[left] > 2 * (long) nums[right]) {
                count += mid - left + 1; // Counting reverse pairs
                right++;
            } else {
                left++;
            }
        }

        left = low;
        right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp[index++] = nums[left++];
            } else {
                temp[index++] = nums[right++];
            }
        }

        while (left <= mid) {
            temp[index++] = nums[left++];
        }

        while (right <= high) {
            temp[index++] = nums[right++];
        }

        System.arraycopy(temp, 0, nums, low, temp.length); // Copying merged values back to original array
        return count;
    }
}
