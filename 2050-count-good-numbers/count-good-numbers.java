class Solution {
   public long MOD = 1_000_000_007;
    public int countGoodNumbers(long n) {

        // find how many odd and even positions in n

        long odd = n/2;
        long even =  (n+1)/2;



        // there can be only 5 even numbers b/w 0-9 and only 4 prime numbers

        return (int) ((pow(5,even) * pow(4,odd) )% MOD);
        
    }

    public long pow(long x,long n){
        //base case
        if(n==0)
        return 1;

        long temp = pow(x,n/2);

      if(n%2==0){
            return (temp * temp) % MOD;
        }
        // If n is odd, return (x^(n/2))^2 * x
        else{
            return (x * temp * temp)% MOD;
        }
    }
}