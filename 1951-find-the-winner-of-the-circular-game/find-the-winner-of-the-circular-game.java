class Solution {
    public int findTheWinner(int n, int k) {
        int pos = 0;

        for(int i=1;i<=n;i++){
            pos = (pos+k) % i;
        }

        return pos+1;
        
    }
}