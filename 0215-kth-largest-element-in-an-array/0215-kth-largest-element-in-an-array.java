import java.util.PriorityQueue;

public class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a); // Max-Heap

        for (int num : nums) {
            pq.offer(num);
        }

        while (k > 1) {
            pq.poll();
            k--;
        }

        return pq.peek();
    }
}
