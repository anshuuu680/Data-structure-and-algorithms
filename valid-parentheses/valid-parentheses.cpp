class Solution {

bool match(char close,char open){
 if( ( open =='(' && close == ')') || ( open =='[' && close == ']') || (open =='{' && close == '}') )
    return true;
    

    return false;
}

public:
    bool isValid(string s) {

        if(s.length()&1){
            return false;
        }

        stack<char>st;
        
        for(int i=0;i<s.length();i++){
            char ch= s[i];
            if(ch=='(' || ch == '{' || ch == '[')
                st.push(ch);
            else{
                if(!st.empty() && match(ch,st.top()))
                st.pop();
                else
                return false;
            }
        }

        if(st.empty())
        return true;

        return false;
    }
};