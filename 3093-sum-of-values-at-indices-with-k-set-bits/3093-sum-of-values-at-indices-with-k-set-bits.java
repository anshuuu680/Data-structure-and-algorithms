import java.util.List;

public class Solution {
    public int sumIndicesWithKSetBits(List<Integer> nums, int k) {
        int totalSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int countSetBits = countSetBits(i);

            if (countSetBits == k) {
                totalSum += nums.get(i);
            }
        }

        return totalSum;
    }

    private int countSetBits(int num) {
        int count = 0;
        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }
}
