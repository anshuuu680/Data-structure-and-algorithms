class Solution {
public:
 vector<int> nextGreaterElements(vector<int>& nums) {

stack<int> s;
    vector<int> v(nums.size());

    for(int i=nums.size()-1;i>=0;i--)
    {
        while(!s.empty() && s.top()<=nums[i])
            s.pop();
        if(s.empty())
            v[i]=-1;
        else
            v[i]=s.top();
        s.push(nums[i]);
    }
    for(int i=nums.size()-1;i>=0;i--)
    {   
        
        while(!s.empty() && s.top()<=nums[i])
            s.pop();
        if(s.empty())
            v[i]=-1;
        else
            v[i]=s.top();
        s.push(nums[i]);
    }
    return v;

 }
};