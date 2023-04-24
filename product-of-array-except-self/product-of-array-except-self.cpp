class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();
        vector<int>ans(n,0);

    long long M=1000000007;
       int product=1;

       int count=0;
       int k=0;

        
       for(int i=0;i<n;i++){
           if(nums[i]==0){
               count++;
                k=i;
           }
           product=product*nums[i];
       }

       if(count>1)
       return ans;

       int exc=1;

        if(count==0){
       for(int i=0;i<n;i++){
          int a = product/nums[i];
          ans[i]=a;
       }}else if(count==1){
        for(int i=0;i<n;i++){
            ans[i]=0;
        }for(int i=0;i<n;i++){
               if(i==k)
               continue;
               else
               exc=exc*nums[i];
           }
           ans[k]=exc;
       }
       return ans;


    }
};