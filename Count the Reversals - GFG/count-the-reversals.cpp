//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here=0;
    
    if(s.length()&1)
    return -1;
    
    stack<char>ans;
    int revcnt=0;
    
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        
        if(ch == '{')
            ans.push(ch);
        else{
              if(!ans.empty() && ans.top() == '{')
                    ans.pop();
                    
              else if(ans.empty()){
                    ans.push('{');
                    revcnt++;
                    
              }
        }
    }
    
    
           while(!ans.empty()){
            ans.pop();
            ans.pop();
            revcnt++;
        }
        

        return revcnt;
    
    
    
    
}