class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {

        int sum = 0;

        for(int i=0;i<nums.size();i++){
            sum+=CountSetBits(i)==k?nums[i]:0;
        }

        return sum;
        
    }

    int CountSetBits(int num){
        int count = 0;

        while(num>0){
            count += num & 1;
            num >>= 1;
        }

        return count;
    }
};