class Solution {
    public List<List<Integer>> generate(int numRows) {

        // make 2d arrayList

        List<List<Integer>> ans = new ArrayList<>();


        // traverse array from 0 to n and 0 to i as we have to make triangle

        for (int i = 0; i < numRows; i++) {
            List<Integer> curr = new ArrayList<>();
            for (int j = 0; j <= i; j++) {

                if (j == 0 || j == i) {
                    curr.add(1);

                } else {
                    int value = ans.get(i - 1).get(j - 1) + ans.get(i - 1).get(j);
                    curr.add(value);
                }

            }
            ans.add(curr);
        }


        return ans;

    }
}