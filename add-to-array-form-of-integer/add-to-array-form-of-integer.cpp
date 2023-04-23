class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        vector<int>ans;
        int i=num.size()-1;

            int carry=0;
       while(i>=0){
            int digit=k%10;
            int sum=num[i]+digit+carry;
            ans.push_back(sum%10);
            carry=sum/10;
            k/=10;
            i--;

        }
        while(k!=0){
            int digit=k%10;
            int sum=digit+carry;
            ans.push_back(sum%10);
            carry=sum/10;
            sum/=10;
            k/=10;
        }

        while(carry!=0){
            int digit=carry%10;
            ans.push_back(digit);
            carry/=10;
        }


        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};