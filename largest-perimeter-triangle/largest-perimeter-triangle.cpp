class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        if(nums.size()<3)
        return 0;

       int ans=0;
        for(int i=0;i<=nums.size()-3;i++){
            if(nums[i]+nums[i+1]>nums[i+2])
            ans=nums[i]+nums[i+2]+nums[i+1];

        }
        return ans;
        
    }
};