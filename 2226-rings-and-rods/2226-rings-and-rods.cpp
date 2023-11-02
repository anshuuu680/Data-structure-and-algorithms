class Solution {
public:
    int countPoints(string rings) {

        unordered_map<int,unordered_set<char>> ms;

        for(int i=0;i<rings.size();i+=2){
            ms[rings[i+1]-'0'].insert(rings[i]);
        }

        int count = 0;

        for(auto it:ms){
            if(it.second.size()==3)
            count++;
        }
        return count;
        
    }
};