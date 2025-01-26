class Solution {
    public List<List<Integer>> permute(int[] nums) {
        // Make 2d list 

        List<List<Integer>> ans = new ArrayList<>();
        solve(nums,ans,0);
        return ans;
    }

    public void solve(int[] nums,List<List<Integer>> ans,int index){
        if(index>=nums.length){
            // make output list 
            List<Integer> output = new ArrayList<>();
            for(int num:nums)
            output.add(num);

            ans.add(output);
        }

        for(int i=index;i<nums.length;i++){
            swap(nums,index,i);
            solve(nums,ans,index+1);
            swap(nums,index,i);
        }
    }

    public void swap(int[] nums,int x,int y){
        int temp = nums[x];
        nums[x] = nums[y];
        nums[y]  = temp;
    }
}