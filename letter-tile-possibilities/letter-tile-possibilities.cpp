class Solution {

void solve(string tiles,string &output,set<string>&result,map<int,bool>&flag){

   for(int i=0;i<tiles.length();i++){
       if(flag[i]==0){
           output.push_back(tiles[i]);
           result.insert(output);
           flag[i]=true;
           solve(tiles,output,result,flag);
           output.pop_back();
           flag[i]=0; 

       }
   }



}


public:
    int numTilePossibilities(string tiles) {

     string output="";
     set<string>result;
     map<int,bool>flag;

     solve(tiles,output,result,flag);

     return result.size();
        
    }
};