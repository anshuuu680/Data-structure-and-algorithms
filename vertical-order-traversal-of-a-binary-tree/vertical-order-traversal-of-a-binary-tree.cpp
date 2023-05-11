/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:



//   hd     level    nodes
//   |        |        |
map<int, map<int, multiset<int>>> mp;

    void helper(TreeNode * current ,int hd ,int level)
    {
        if(!current) // base case
        {
            return;
        }

        mp[hd][level].insert(current -> val);

        helper(current -> left, hd-1, level+1); // inserting the LST nodes
        helper(current -> right, hd+1, level+1); // inserting the RST nodes
    } 

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        helper(root, 0, 0);

        vector<vector<int>> ans;  // matrix vector to store the level wise vertical ans
        // populating the answer vector
        for(auto m1 : mp)
        {
            vector<int> v;
            for(auto m2 : m1.second)
            {
                for(auto m3 : m2.second)
                {
                    v.push_back(m3);
                }
            }
            ans.push_back(v);
        }                    
         return ans;
    }
};