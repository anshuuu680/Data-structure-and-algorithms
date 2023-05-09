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

bool solve(TreeNode* a,TreeNode* b){

    if(a==NULL && b==NULL)
    return true;
    else if(a==NULL && b!=NULL)
    return false;
    else if(a!=NULL && b==NULL)
    return false;
    else if(a->val!=b->val)
    return false;

    return solve(a->left,b->right) && solve(a->right,b->left);

}

public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;

        return solve(root->left,root->right);
        
        
    }
};