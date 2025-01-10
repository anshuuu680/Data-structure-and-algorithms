class Solution {

    private boolean check(int[] piles,int mid , int h){
        int ans = 0;
        for(int pile:piles){
            ans+= pile / mid;
            if(pile % mid!=0)
            ans++;
        }

       return ans <=h ? true : false;
    }

    public int minEatingSpeed(int[] piles, int h) {
        int low = 1;
        int high = Arrays.stream(piles).max().getAsInt();

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (check(piles, mid, h))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
}