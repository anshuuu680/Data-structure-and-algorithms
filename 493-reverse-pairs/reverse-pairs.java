import java.util.*;

class Solution {

    public int mergeSort(int[] nums, int low, int high) {
        int count = 0;
        if (low < high) {
            int mid = low + (high - low) / 2;

            count += mergeSort(nums, low, mid);
            count += mergeSort(nums, mid + 1, high);
            count += countPairs(nums, low, mid, high);

            merge(nums, low, mid, high);
        }
        return count;
    }

    public void merge(int[] nums, int low, int mid, int high) {
        int left = low, right = mid + 1;

        List<Integer> temp = new ArrayList<>();

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.add(nums[left++]);
            } else {
                temp.add(nums[right++]);
            }
        }

        while (left <= mid) {
            temp.add(nums[left++]);
        }

        while (right <= high) {
            temp.add(nums[right++]);
        }

        int index = low;
        for (int num : temp) {
            nums[index++] = num;
        }
    }

    public int countPairs(int[] nums, int low, int mid, int high) {
        int count = 0;
        int right = mid + 1;

        for (int i = low; i <= mid; i++) {
            while (right <= high && (0.5*nums[i]) > nums[right]) {
                right++;
            }
            count += right - (mid + 1);
        }
        return count;
    }

    public int reversePairs(int[] nums) {
        return mergeSort(nums, 0, nums.length - 1);
    }
}
