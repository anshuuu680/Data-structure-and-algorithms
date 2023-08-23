class Solution {
    public List<String> generateParenthesis(int n) {

      

      List<String> ans = new ArrayList<>();
      solve(n,"",ans,0,0,0);

       return ans;

    }
  static void solve(int n,String output,List<String> ans,int i,int open,int close){
    
    if(i==2*n){
      ans.add(output);
    }

    if(open<n){
      output+="(";
      solve(n,output,ans,i+1,open+1,close);
      output = output.substring(0,output.length()-1);
    }
     if(close<open){
      output+=")";
      solve(n,output,ans,i+1,open,close+1);
      output = output.substring(0,output.length()-1);
       
    }
      
  }
}