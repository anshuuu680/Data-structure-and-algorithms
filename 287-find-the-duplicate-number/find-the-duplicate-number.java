class Solution {
    public int findDuplicate(int[] nums) {
         int n = nums.length;
        boolean[] track = new boolean[n + 1];
        for(int num : nums)
        {
            if(track[num]) return num;
            track[num] = true;
        }
        return -1;
}

}