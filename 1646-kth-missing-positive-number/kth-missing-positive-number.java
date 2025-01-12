class Solution {
    public int findKthPositive(int[] arr, int k) {
        int low = 0;
        int high = arr.length - 1;

            int mid = low +(high-low)/2;
        while(low<=high){

            if(arr[mid] - mid -1 < k) // go in right half
            low = mid + 1;
            else
            high = mid -1;

            mid = low + (high - low)/2;
        }

        return low + k;
    }
}