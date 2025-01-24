class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {

        List<List<Integer>> ans = new ArrayList<>();

         solve(candidates,target,0,0,new ArrayList<>(),ans);

         return ans;
    }

    public void solve(int[] nums, int target,int index,int sum,List<Integer> output, List<List<Integer>> ans){

         if (sum > target) {
            return;
        }
        if (index == nums.length) {
            if (sum == target) {
                ans.add(new ArrayList<>(output));
            }
            return;
        }

        // add in sum
        sum+= nums[index];
        //add in output array
        output.add(nums[index]);
        //recursive call
        solve(nums,target,index,sum,output,ans);

        // backtracking 
        sum-= nums[index];
        output.remove(output.size()-1);
        solve(nums,target,index+1,sum,output,ans);

    }
}