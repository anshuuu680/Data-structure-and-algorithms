class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
    
      unordered_map<int, int> freqMap;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int res = k - nums[i];
     if (freqMap.find(res) != freqMap.end() && freqMap[res] > 0) {
                count++;
                freqMap[res]--;
            } else {
                freqMap[nums[i]]++;
            }
        }
        return count;
    }
};