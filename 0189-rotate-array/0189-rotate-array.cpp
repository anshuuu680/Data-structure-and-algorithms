class Solution {

void reverse(vector<int>&nums, int i, int j){
        int li = i; // left index;
        int ri = j; // right index
        
        while(li < ri){
            int temp = nums[li];
            nums[li] = nums[ri];
            nums[ri] = temp;
            
            li++;
            ri--;
        }
    }


public:
    void rotate(vector<int>& nums, int k) {
        // vector<int>ans(nums.size());

        // for(int i=0;i<nums.size();i++){
        //     ans[(i+k)%nums.size()]=nums[i];
        // }

        // nums=ans;


         k = k % nums.size(); 
        // if(k < 0){ 
        //     k += nums.size();
        // }
        // part 1 reverse
        reverse(nums, 0, nums.size() - k - 1);
        // part 2 reverse
        reverse(nums, nums.size() - k, nums.size() - 1);
        // complete reverse
        reverse(nums, 0, nums.size() - 1);


        

      
        
    }
};