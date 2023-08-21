class Solution {
    public boolean isPalindrome(int x) {
        int k = x;

        if(x<0){
            x=-x;
        }



        int rev = 0;

        while(x!=0){
            int digit = x % 10;
            x=x/10;
            rev = 10*rev + digit;

        }

        if(k==rev)
        return true;
        else
        return false;
        
    }
}