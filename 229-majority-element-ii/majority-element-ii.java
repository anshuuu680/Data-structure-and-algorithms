class Solution {
     public List<Integer> majorityElement(int[] nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int el1 = Integer.MIN_VALUE;
        int el2 = Integer.MIN_VALUE;

        // Step 1: Find potential majority elements using the Moore Voting algorithm
        for (int i = 0; i < nums.length; i++) {
            if (cnt1 == 0 && nums[i] != el2) {
                cnt1 = 1;
                el1 = nums[i];
            } else if (cnt2 == 0 && nums[i] != el1) {
                cnt2 = 1;
                el2 = nums[i];
            } else if (nums[i] == el1) {
                cnt1++;
            } else if (nums[i] == el2) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        // Step 2: Count occurrences of the potential candidates
        cnt1 = 0;
        cnt2 = 0;

        for (int num : nums) {
            if (num == el1) cnt1++;
            if (num == el2) cnt2++;
        }

        // Step 3: Check if candidates are valid majority elements
        List<Integer> ans = new ArrayList<>();
        int threshold = nums.length / 3;

        if (cnt1 > threshold) ans.add(el1);
        if (cnt2 > threshold) ans.add(el2);

        return ans;
    }
}