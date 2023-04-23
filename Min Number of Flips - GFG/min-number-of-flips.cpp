//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    
     int n = S.size();
    
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(S[i]!=(i%2 + '0')){
            cnt++;
        }
    }
    return min(cnt,n-cnt);
    
}