//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

   bool isprime(int n)
    {
        if(n==1)
        return 0;
        for(long long i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            return 0;
        }
        return 1;
    }
    


    long long primeProduct(long long L, long long R){
        // code here
        
        long long product=1;
       for(long long i=L;i<=R;i++)
        {
            if(isprime(i))
            {
                product=(product%1000000007*i%1000000007)%1000000007;
            }
        }
        return product;
  
        
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends