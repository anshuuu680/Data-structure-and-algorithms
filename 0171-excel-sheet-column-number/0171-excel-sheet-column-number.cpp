class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(auto i:columnTitle){
            int n =  int(i) - 'A' + 1;
              ans = ans*26+n;
        }  

        return ans;
        
    }
};