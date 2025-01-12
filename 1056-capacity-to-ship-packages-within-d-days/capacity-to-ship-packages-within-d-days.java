class Solution {

    private boolean isPossible(int[] nums, int days, int capacity) {

        int day = 1;
        int sum = 0;

        for (int i = 0; i < nums.length; i++) {
            if(nums[i]>capacity) return false;
            if (sum + nums[i] > capacity) {
                day++;
                sum = nums[i];
                if (day > days)
                    return false;
            } else {
                sum += nums[i];
            }
        }

        return true;
    }

    public int shipWithinDays(int[] weights, int days) {
        int low = Arrays.stream(weights).min().getAsInt();
        int high = 0;

        for (int weigh : weights) {
            high += weigh;
        }

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (isPossible(weights, days, mid)) {
                high = mid;
            } else
                low = mid + 1;
        }

        return low;
    }
}