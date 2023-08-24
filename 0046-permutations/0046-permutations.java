class Solution {
    public List<List<Integer>> permute(int[] nums) {

          List<List<Integer>> ans = new ArrayList<>();

          solve(nums,ans,0);

          return ans;
        
    }

   static void solve(int[] nums,List<List<Integer>> ans,int index){
       if(index>=nums.length){
           List<Integer> temp = new ArrayList<>();
           for(int num:nums){
               temp.add(num);
           }
           ans.add(temp);
           return;
       }

       for (int i = index; i < nums.length; i++) {
            swap(nums, index, i);
            solve(nums, ans, index + 1);
            swap(nums, index, i);
        }
    }

    static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

   }

