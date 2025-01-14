class Solution {
    public boolean uniqueOccurrences(int[] arr) {

        // This depends on the constraints

        int[] freq = new int[2000];

        for(int obj:arr)
        freq[obj+1000]++;

        // tracking array 

        boolean[] track = new boolean[2000];

        for(int obj:freq){
            if(obj>0){

            if(track[obj])
            return false;
            }

            track[obj] = true;
        }


        return true;

        
    }
}