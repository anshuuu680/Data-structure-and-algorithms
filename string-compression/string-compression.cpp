class Solution {
public:
    int compress(vector<char>& chars) {

        int i=0;
        int ansindex=0;


        while(i<chars.size()){

         int j=i+1;

         while(j<chars.size() && chars[i]==chars[j]){
             j++;
         }

         chars[ansindex++]=chars[i];
         int count=j-i;

         if(count>1){
             string digits=to_string(count);

             for(char k:digits){
                 chars[ansindex++]=k;
             }
         }
       
       i=j;


        }

        return ansindex;
        
    }
};