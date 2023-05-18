class Solution {
public:
    double average(vector<int>& salary) {

        int mini = INT_MAX;
        int maxi = INT_MIN;   

        for(int i=0;i<salary.size();i++){
            mini=min(mini,salary[i]);
            maxi=max(maxi,salary[i]);
        }     

        double sum =0;
        int count=0;

        for(int i=0;i<salary.size();i++){
            if(salary[i]==mini || salary[i]==maxi)
            continue;
            else{
           count++;
            sum+=salary[i];
            }
        }
        

        return sum/count;
    }
};