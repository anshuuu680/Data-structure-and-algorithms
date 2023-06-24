class Solution {

int search(vector<int>nums,int k, int ele){
    for(int i=k;i<nums.size();i++){
        if(nums[i]>ele)
        return nums[i];
    }
    return -1;
}


public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++){
            int ele = nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(ele==nums2[j]){
                int k = search(nums2,j,ele);
                ans.push_back(k);
                break;
                }
            }
        }
        return ans;

    }
};