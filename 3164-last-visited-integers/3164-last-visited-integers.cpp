class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        int n = words.size();
    
        vector<int> ans;
        vector<int> nums;  
        int p_Count = 0; 

        for (int i = 0; i<n; i++) {
            string word = words[i];
            if (word == "prev") {
                p_Count++;
                if (p_Count > nums.size()) {
                    ans.push_back(-1);
                } else {
                    ans.push_back(nums[nums.size() - p_Count]);
                }
            } else {
                int num = stoi(word);
                nums.push_back(num);
                p_Count = 0;
            }
        }

        return ans;
    }
};