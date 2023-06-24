class Solution {
public:
 vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int ele = nums[i];
        bool flag = false;
        for (int j = i + 1; j < n+i; j++) {  // Corrected loop condition
            if (nums[j % n] > ele) {
                ans.push_back(nums[j % n]);  // Push the next greater element
                flag = true;
                break;
            }
        }
        if (!flag)
            ans.push_back(-1);
    }
    return ans;
}


};