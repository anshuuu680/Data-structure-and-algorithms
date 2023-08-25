import java.util.*;

public class Solution {
    public List<String> letterCombinations(String digits) {
        List<String> ans = new ArrayList<>();
        String[] mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, "", 0, ans, mapping);
        return ans;
    }

    static void solve(String digits, String output, int index, List<String> ans, String[] mapping) {
        if (index >= digits.length()) {
            if (output.length() > 0)
                ans.add(output);
            return;
        }

        int number = digits.charAt(index) - '0';
        String value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            solve(digits, output + value.charAt(i), index + 1, ans, mapping);    //output.append(value.charAt(i));
          // Backtracking   -->   output.deleteCharAt(output.length() - 1);
        }
    }
}
