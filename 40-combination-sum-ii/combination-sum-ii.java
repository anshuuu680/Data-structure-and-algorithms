class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);

        List<List<Integer>> ans = new ArrayList<>();

        solve(candidates, target, 0, new ArrayList<>(), 0, ans);
        return ans;
    }

    public void solve(int[] nums, int target, int currsum, List<Integer> output, int index, List<List<Integer>> ans) {
        if (currsum > target) return;

        if (currsum == target) {
            ans.add(new ArrayList<>(output));
            return;
        }

        for (int i = index; i < nums.length; i++) {
            // Skip duplicates
            if (i > index && nums[i] == nums[i - 1]) continue;

            // Add the current element to the output
            output.add(nums[i]);

            // Recursive call 
            solve(nums, target, currsum + nums[i], output, i + 1, ans);

            // Backtracking 
            output.remove(output.size() - 1);
        }
    }
}
