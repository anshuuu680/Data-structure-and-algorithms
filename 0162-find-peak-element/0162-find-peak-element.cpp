class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         int e=nums.size()-1;
        int s=0;

        int mid=s+(e-s)/2;

        while(s<e){
           if(nums[mid+1]>nums[mid])
            s=mid+1;
            else
            e=mid;

            mid=s+(e-s)/2;
        }

        return s;

        
    }
};