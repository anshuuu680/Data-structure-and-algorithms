class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {

        string temp;

        for(auto ch:words){
            temp+=ch[0];
        }

        return temp==s;
        
    }
};