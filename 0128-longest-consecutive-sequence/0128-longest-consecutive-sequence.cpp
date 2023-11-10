class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          unordered_set<int> set;
        for(int num : nums){
            set.insert(num);
        }
        int max_length = 0;
        for(int num : nums){
            if(set.find(num-1) == set.end()){
                int currentNumber = num;
                int curr_length = 1;
                while(set.find(currentNumber+1) != set.end()){
                    currentNumber++;
                    curr_length++;
                }
                max_length = max(max_length, curr_length);
            }
        }
        return max_length;
    }
};