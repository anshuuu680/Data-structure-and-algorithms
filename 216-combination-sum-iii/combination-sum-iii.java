class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) {
          List<List<Integer>> ans = new ArrayList<>();
          solve(ans,new ArrayList<Integer>(),k,n,1);
          return ans;
    }

    public void solve(List<List<Integer>> ans, List<Integer> output, int k,  int n, int index){
        if(output.size()==k && n==0){
            ans.add(new ArrayList<>(output));
            return;
        }

        for(int i=index;i<=9;i++){
            output.add(i);
            solve(ans,output,k,n-i,i+1);
            output.remove(output.size()-1);
        }
    }
}