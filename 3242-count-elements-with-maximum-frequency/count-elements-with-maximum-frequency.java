class Solution {
    public int maxFrequencyElements(int[] nums) {

        HashMap<Integer, Integer> map = new HashMap<>();
        int maxFrequency = 0;

        for (int num : nums) {
            // if(map.containsKey(num))
            // map.put(num, map.get(num) + 1);
            // else
            // map.put(num,1);

            // orr

            map.put(num, map.getOrDefault(num, 0) + 1);
            maxFrequency = Math.max(maxFrequency, map.get(num));
        }




        int sum = 0;
       for (int key : map.keySet()) {
            if (map.get(key) == maxFrequency) {
                sum += map.get(key);
            }
        }


        return sum;
    }
}