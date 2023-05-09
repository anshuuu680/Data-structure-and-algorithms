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

pair<int,bool>solve(TreeNode* root){
    if(root==NULL)
    return make_pair(0,true);

    pair<int,bool> leftans = solve(root->left);
    pair<int,bool> rightans = solve(root->right);

    bool diff = abs(leftans.first-rightans.first)<=1;

    bool leftbalanced = leftans.second;
    bool rightbalanced = rightans.second;

    if(leftbalanced && rightbalanced && diff)
    return make_pair(max(leftans.first,rightans.first)+1,true);
    else
    return make_pair(max(leftans.first,rightans.first)+1,false);

}

public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return true;

       pair<int,bool> ans= solve(root);

       return ans.second;
    }
};