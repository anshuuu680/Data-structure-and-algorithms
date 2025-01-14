class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        // make a hashmap

        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int a : arr)
            mp.put(a, mp.getOrDefault(a, 0) + 1);
    
        HashSet<Integer> hs = new HashSet<>(); // for the frequencies

        for(int value : mp.values()){
            if(!hs.add(value))
            return false;
        }


        return true;
}

}