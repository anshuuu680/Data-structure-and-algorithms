class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int m = digits.size()-1;
      int n=digits[m]+1;

      
       vector<int> num; 
      
       int carry=0;
        while(m!=0){      
             num.push_back(n%10);
              carry=n/10;
               n=digits[m-1]+carry;
                m--; 
                } 
                num.push_back(n%10);
                 if(n>=10) 
                 num.push_back(n/10); 
                 reverse(num.begin(), num.end());
                  return num; 
    }
};