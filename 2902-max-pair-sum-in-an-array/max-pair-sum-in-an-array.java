class Solution {
    public int maxSum(int[] nums) {
        int ans = -1;
        Map<Integer, List<Integer>> mp = new HashMap<>();
        for (int n : nums) {
            int t = n;
            int maxDigit = 0;
            while (t > 0) {
                maxDigit = Math.max(t % 10, maxDigit);
                t = t / 10;
            }
            if (!mp.containsKey(maxDigit)) {
                mp.put(maxDigit, new ArrayList<>());
            }
            mp.get(maxDigit).add(n);
        }

        for (Map.Entry<Integer, List<Integer>> entry : mp.entrySet()) {
            List<Integer> v = entry.getValue();
            v.sort((a, b) -> b - a);
            if (v.size() >= 2) {
                ans = Math.max(ans, v.get(0) + v.get(1));
            }
        }

        return ans;
    }
}