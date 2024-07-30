class Solution {
    public List<List<Integer>> permute(int[] nums) {

        List<List<Integer>> ans = new ArrayList<>();

        solve(nums,ans,0);

        return ans;
        
    }

    public void solve(int[] nums,List<List<Integer>> ans,int index){

        if(index>=nums.length){
        List<Integer> temp = new ArrayList<>();
            for(int num:nums)
            temp.add(num);
            ans.add(temp);
        }

        for(int i=index;i<nums.length;i++){
            swap(nums,index,i);
            solve(nums,ans,index+1);
            swap(nums,index,i);
        }

    }

    private void swap(int[]nums,int l,int r){
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
    }

}