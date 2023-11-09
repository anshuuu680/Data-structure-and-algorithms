class Solution {
    public int lengthOfLongestSubstring(String s) {
    int n = s.length();
        int maxLength = 0;
        Queue<Character> queue = new LinkedList<>();

        for (char c : s.toCharArray()) {
            while (queue.contains(c)) {
                queue.poll();
            }
            queue.offer(c);

            maxLength = Math.max(maxLength, queue.size());
        }

        return maxLength;
}
}