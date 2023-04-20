class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

         int s=0;
    int e=(matrix.size()*matrix[0].size())-1;
    int n=matrix[0].size();
    int mid=s+(e-s)/2;


    while(s<=e){
        int elem = matrix[mid/n][mid%n];

       if(elem==target){
           return 1;
       }

       else if(elem<target){
           s=mid+1;
       }else 
       e=mid-1;

        mid=s+(e-s)/2;

    }

    return 0;

        
        
    }
};