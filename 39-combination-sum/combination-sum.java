public class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
    	  Arrays.sort(candidates);
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        solve(result, new ArrayList<Integer>(), candidates, target, 0);
        
        return result;
    }
    
    private void solve(List<List<Integer>> result, List<Integer> cur, int candidates[], int target, int index){
    	if(target > 0){
    		for(int i = index; i < candidates.length && target >= candidates[i]; i++){
            if (i > index && candidates[i] == candidates[i - 1])
                    continue;
    			cur.add(candidates[i]);
    			solve(result, cur, candidates, target - candidates[i], i);
    			cur.remove(cur.size() - 1);
    		}
    	}
    	else if(target == 0 ){
    		result.add(new ArrayList<Integer>(cur));
    	}
    }
}