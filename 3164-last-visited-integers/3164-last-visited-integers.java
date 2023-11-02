class Solution {
    public List<Integer> lastVisitedIntegers(List<String> words) {
        final List<Integer> answers = new ArrayList<>();
        final List<Integer> numbers = new ArrayList<>();
        
        int prevSeen = 0;
        
        for(String word: words){
            if("prev".equals(word)){
                prevSeen++;
                
                int i = numbers.size() - prevSeen;
                
                answers.add(0 <= i ? numbers.get(i) : -1);
            } else {
                prevSeen = 0;
                numbers.add(Integer.valueOf(word));
            }
        }
        
        return answers;
    }
}