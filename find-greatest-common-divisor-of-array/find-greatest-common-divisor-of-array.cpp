class Solution {
public:
    int findGCD(vector<int>& nums) {


        int mini=INT_MAX;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
          for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
        }


        if(maxi==0){
            return mini;
        }else if(mini==0){
            return maxi;
        }

        while(maxi!=mini){
            if(maxi>mini)
            maxi=maxi-mini;
            else 
            mini=mini-maxi;

        }
        
            return maxi;
    }
};