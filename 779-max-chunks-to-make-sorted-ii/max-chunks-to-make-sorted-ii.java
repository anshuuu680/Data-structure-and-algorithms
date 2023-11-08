class Solution {
    public int maxChunksToSorted(int[] arr) {
        int n = arr.length;
        int[] leftmin = new int[n];
        int[] rightmax = new int[n];

        leftmin[0] = arr[0];
        for (int i = 1; i < n; i++) {
            leftmin[i] = Math.max(leftmin[i-1], arr[i]);
        }

        rightmax[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightmax[i] = Math.min(rightmax[i + 1], arr[i]);
        }

        int res = 0;
        for (int i = 0; i < n - 1; i++) {
            if (leftmin[i] <= rightmax[i + 1]) res++;
        }

        return res + 1;
    }
}