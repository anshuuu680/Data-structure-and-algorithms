class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set = new HashSet();
        for (int num : nums) {
            set.add(num);
        }
        int ans = 0;
        for (int key : nums) {
            if (set.contains(key)) {
                set.remove(key);
                int low = key - 1;
                while (set.contains(low)) {
                    set.remove(low);
                    low--;
                }
                int high = key + 1;
                while (set.contains(high)) {
                    set.remove(high);
                    high++;
                }
                ans = Math.max(ans, high - low - 1);
            }
        }
        return ans;
    }
}