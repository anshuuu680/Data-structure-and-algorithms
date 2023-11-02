class Solution {
    public List<Integer> lastVisitedIntegers(List<String> words) {
        ArrayList<Integer> ans = new ArrayList<>();
        ArrayList<Integer> temp = new ArrayList<>();
        int prev_counter = 0;

        for (int i = 0; i < words.size(); i++) {
            if ("prev".equals(words.get(i))) { 
                prev_counter++;
                if (prev_counter > temp.size()) {
                    ans.add(-1);
                } else {
                    ans.add(temp.get(temp.size() - prev_counter));
                }
            } else {
                prev_counter = 0;
                temp.add(Integer.valueOf(words.get(i)));
            }
        }

        return ans;
    }
}
