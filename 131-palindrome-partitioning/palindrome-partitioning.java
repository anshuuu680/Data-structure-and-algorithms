class Solution {
    public List<List<String>> partition(String s) {

        List<List<String>> ans = new ArrayList<>();

        solve(s,0,new ArrayList<>(),ans);
        return ans;
        
    }

    public void solve(String str,int index,List<String> output,List<List<String>> ans){

            if(index==str.length()){
                ans.add(new ArrayList<>(output));
                return;
            }

            for(int i=index;i<str.length();i++){
                if(isPalindrome(str,index,i)){
                    output.add(str.substring(index,i+1));
                    solve(str,i+1,output,ans);
                    output.remove(output.size()-1);
                }
            }
    }

    public boolean isPalindrome(String str,int start,int end){
           
           while(start<end){
            if(str.charAt(start++)!=str.charAt(end--))
                return false;
           }

           return true;
    }
}