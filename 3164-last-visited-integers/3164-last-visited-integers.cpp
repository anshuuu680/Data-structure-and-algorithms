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
               int k = nums.size() - p_Count;
               ans.push_back(0<=k?nums[k]:-1);
            } else {
                int num = stoi(word);
                nums.push_back(num);
                p_Count = 0;
            }
        }

        return ans;
    }
};