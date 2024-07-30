class Solution {
    public List<String> generateParenthesis(int n) {

        List<String> ans = new ArrayList<>();

        solve(n, "", 0, 0, 0, ans);

        return ans;

    }

    private void solve(int n, String curr, int open, int close, int index, List<String> ans) {

         if(index==2*n){
            ans.add(curr);
            return;
         }

         if(open<n){
            curr+='(';
            solve(n,curr,open+1,close,index+1,ans);
            curr=curr.substring(0,curr.length()-1);
         }

         if(close<open){
            solve(n,curr+')',open,close+1,index+1,ans);
         }

    }
}