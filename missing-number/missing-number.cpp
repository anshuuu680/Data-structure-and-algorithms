class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();

        int ans= n*(2+(n-1));
        ans=ans/2;

        int sum=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
        }

        return ans-sum;
       
    }
};