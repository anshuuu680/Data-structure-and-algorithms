class Solution {
    public int rangeSum(int[] nums, int n, int left, int right) {

        final int modulo = (int)1e9 + 7;

        ArrayList<Integer> sumArray = new ArrayList<>();



        for(int i = 0;i<nums.length;i++){
        int sum = 0;
        for(int j = i;j<nums.length;j++){
            sum+=nums[j];
            sumArray.add(sum);
        }
        }

        Collections.sort(sumArray);

        int final_sum  =  0;

        for(int i=left-1;i<right;i++){
            final_sum = (final_sum + sumArray.get(i)) % modulo;
        }

        return final_sum;

        
    }
}