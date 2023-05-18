class Solution {
public:
    double average(vector<int>& salary) {

        int mini = INT_MAX;
        int maxi = INT_MIN;   

        double sum =0;
        double ans = 0;
        
        for(int i=0;i<salary.size();i++){
            mini=min(mini,salary[i]);
            maxi=max(maxi,salary[i]);
            sum+=salary[i];
        }  



    ans =  (sum - mini - maxi)/(salary.size()-2);
       


        return ans;
    }
};