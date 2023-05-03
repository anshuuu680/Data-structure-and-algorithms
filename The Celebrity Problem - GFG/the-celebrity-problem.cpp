//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
#include<stack>

class Solution 
{
   bool knows(vector<vector<int> >& M, int a,int b)
     {
         return M[a][b];
     }
     
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
         
    stack<int> s;
 
    // Celebrity
    int C;

    for (int i = 0; i < n; i++)
        s.push(i);
 

    while (s.size() > 1) {
        int A = s.top();
        s.pop();
        int B = s.top();
        s.pop();
        if (knows(M,A, B)) {
            s.push(B);
        }
        else {
            s.push(A);
        }
    }

    C = s.top();
    s.pop();
 
  
    for (int i = 0; i < n; i++) {
       
        if ((i != C) && (knows(M,C, i) || !knows(M,i, C)))
            return -1;
    }
 
    return C;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends