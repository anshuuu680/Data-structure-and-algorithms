class Solution {
    public int countPoints(String rings) {
         Map<Integer, Set<Character>> ms = new HashMap<>();

        for (int i = 0; i < rings.length() - 1; i += 2) {
            ms.computeIfAbsent(rings.charAt(i + 1) - '0', k -> new HashSet<>()).add( rings.charAt(i));
        }

        int count = 0;
        for (Map.Entry<Integer, Set<Character> > entry : ms.entrySet()) {
            if (entry.getValue().size() == 3) {
                count++;
            }
        }

        return count;
        }
    
}