class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);

        List<List<Integer>> ans = new ArrayList<>();

        solve(nums,0,new ArrayList<>(),ans);
        return ans;
    }

    public void solve(int[] nums,int index,List<Integer> output,List<List<Integer>> ans){
         
       
            ans.add(new ArrayList<>(output));
          
         

         for(int i=index;i<nums.length;i++){
            if(i!=index && nums[i]==nums[i-1])
            continue;

            output.add(nums[i]);
            //recursive call
            solve(nums,i+1,output,ans);
            output.remove(output.size()-1);
         }


    }
}