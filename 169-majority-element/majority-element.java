class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int el = Integer.MIN_VALUE;

        for(int num:nums){
            if(count==0){
                el = num;
                count++;
            }else if(num==el)
            count++;
            else
            count--;

        }

        return el;
    }
}