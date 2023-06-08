class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int max_so_far = INT_MIN;
        int max_sum = 0;

        for(int i=0;i<nums.size();i++){
            max_sum += nums[i];
            if(max_so_far<max_sum)
                max_so_far = max_sum;
            if(max_sum < 0)
            max_sum =0;
        }

        return max_so_far;
        
    }
};