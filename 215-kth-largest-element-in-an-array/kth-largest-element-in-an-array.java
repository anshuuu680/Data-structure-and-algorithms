class Solution {
    public int findKthLargest(int[] nums, int k) {
        // Make a Max heap 
        PriorityQueue<Integer> pq = new PriorityQueue<>((a,b)->b-a);

        // push all the elements

        for(int num:nums)
        pq.offer(num);

        // pop k elements 
        while(k>1){
        pq.poll();
        k--;
        }


        return pq.peek();

    }
}