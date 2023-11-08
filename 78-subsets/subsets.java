public class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> subsets = new ArrayList<>();
        generateSubsets(nums, 0, new ArrayList<Integer>(), subsets);
        return subsets;
    }

private void generateSubsets(int[] nums, int index, List<Integer> current, List<List<Integer>> subsets) {
        if (index == nums.length) {
            subsets.add(new ArrayList<>(current));
            return;
        }

        // Include the current number
        current.add(nums[index]);
        generateSubsets(nums, index + 1, current, subsets);
        current.remove(current.size() - 1);

        // Exclude the current number
        generateSubsets(nums, index + 1, current, subsets);
    }
}


