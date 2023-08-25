import java.util.ArrayList;
import java.util.List;

public class Solution {
    List<List<Integer>> ans = new ArrayList<>();

    public void helper(int[] candidates, int target, int i, int currsum, List<Integer> temp) {
        if (currsum > target) {
            return;
        }
        if (i == candidates.length) {
            if (currsum == target) {
                ans.add(new ArrayList<>(temp));
            }
            return;
        }
        currsum += candidates[i];
        temp.add(candidates[i]);
        helper(candidates, target, i, currsum, temp);
        currsum -= candidates[i];
        temp.remove(temp.size() - 1);
        helper(candidates, target, i + 1, currsum, temp);
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<Integer> temp = new ArrayList<>();
        helper(candidates, target, 0, 0, temp);
        return ans;
    }

    
  
}
