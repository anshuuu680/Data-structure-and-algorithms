class Solution {
public:
   int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int maxProductSoFar = nums[0];
    int minProductSoFar = nums[0];
    int maxProduct = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0) {
            swap(maxProductSoFar, minProductSoFar);
        }

        maxProductSoFar = max(nums[i], maxProductSoFar * nums[i]);
        minProductSoFar = min(nums[i], minProductSoFar * nums[i]);

        maxProduct = max(maxProduct, maxProductSoFar);
    }

    return maxProduct;
}

};