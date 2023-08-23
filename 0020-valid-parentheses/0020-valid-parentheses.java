class Solution {
    public boolean isValid(String s) {

        if(s.length()%2==1){
            return false;
        }

         Stack<Character> st = new Stack<Character>();

        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if(ch == '(' || ch == '{' || ch == '['){
                        st.push(ch);
            }else{
                if(!st.empty() && match(ch,st.peek())){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
          
           if(st.empty())
        return true;

        return false;

        
    }


  static  boolean match(char close,char open){
 if( ( open =='(' && close == ')') || ( open =='[' && close == ']') || (open =='{' && close == '}') )
    return true;
    

    return false;
}
}