import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

class Solution {
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        HashSet<List<Integer>> set = new HashSet<>();
        solve(nums, ans, set, 0);
        return ans;
    }

    static void solve(int[] nums, List<List<Integer>> ans, HashSet<List<Integer>> set, int index) {
        if (index >= nums.length) {
            List<Integer> temp = new ArrayList<>();
            for (int num : nums) {
                temp.add(num);
            }
            if (set.add(temp))
                ans.add(temp);
            return;
        }

        for (int i = index; i < nums.length; i++) {
            swap(nums, index, i);
            solve(nums, ans, set, index + 1);
            // Do not swap back here
            swap(nums, index, i); // But you need to swap back before the next iteration
        }
    }

    static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
