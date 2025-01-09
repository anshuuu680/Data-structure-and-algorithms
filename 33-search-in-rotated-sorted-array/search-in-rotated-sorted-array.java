public class Solution {

    private int findPivot(int[] nums) {
        int s = 0;
        int e = nums.length - 1;
        int mid = s + (e - s) / 2;

        while (s < e) {
            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } else {
                e = mid;
            }

            mid = s + (e - s) / 2;
        }

        return s;
    }

    private int bSearch(int[] nums, int s, int n, int key) {
        int starting = s;
        int ending = n;
        int mid = (starting + ending) / 2;
        while (starting <= ending) {
            if (nums[mid] == key) {
                return mid;
            } else if (nums[mid] > key) {
                ending = mid - 1;
            } else {
                starting = mid + 1;
            }
            mid = (starting + ending) / 2;
        }
        return -1;
    }

    public int search(int[] nums, int target) {
        int e = nums.length - 1;
        int pivot = findPivot(nums);

        if (nums[pivot] <= target && target <= nums[e]) {
            return bSearch(nums, pivot, e, target);
        } else {
            return bSearch(nums, 0, pivot - 1, target);
        }
    }
}
