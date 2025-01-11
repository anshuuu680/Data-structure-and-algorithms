class Solution {

    private boolean isPossible(int[] bloomDay,int m,int k,int mid){
        int bouquets = 0;

        for(int i=0;i<bloomDay.length;i++){
            int count = 0;

           while(i<bloomDay.length && bloomDay[i]<=mid && count<k){
            count++;
            i++;
           }

           if(count==k){
            bouquets++;
            i--;
           }

           if(bouquets>=m)
           return true;
        }

        return false;
    }


    public int minDays(int[] bloomDay, int m, int k) {
        if ((long) m * k > bloomDay.length) {
            return -1;
        }

        int low = 1;
        int high = (int) 1e9;

        while(low<high){
            int mid = low + (high - low)/2;

            if(isPossible(bloomDay,m,k,mid))
            high = mid;
            else
            low = mid + 1;
        }

        return low;
    }
}