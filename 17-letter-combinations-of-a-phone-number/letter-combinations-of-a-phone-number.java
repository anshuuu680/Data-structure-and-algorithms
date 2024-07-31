class Solution {
    public List<String> letterCombinations(String digits) {
        List<String> ans = new ArrayList<>();

        String[] map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,map,0,"",ans);

        return ans; 

    }


   private void solve(String digits,String[] map,int index,String output,List<String> ans){

    if(index==digits.length()){
        if(output.length()>0)
        ans.add(output);
        return;
    }

    int num = digits.charAt(index) - '0';

    String mapper = map[num];

    for(int i=0;i<mapper.length();i++){
        solve(digits,map,index+1,output+mapper.charAt(i),ans);
    }



   }

}