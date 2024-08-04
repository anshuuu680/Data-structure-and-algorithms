class Solution {
    public int maxFrequencyElements(int[] nums) {

        int maxi = 0;
        for(int num:nums)
            maxi = Math.max(num,maxi);

         int[] mapping = new int[maxi+1];
         int maxFreq =  0;

         for(int i=0;i<nums.length;i++){
            mapping[nums[i]]++;
            maxFreq = Math.max(maxFreq,mapping[nums[i]]);
         }   

         int ans = 0;

         for(int n:mapping){
            if(n==maxFreq)
            ans+= n;
         }


         return ans;
        
    }
}