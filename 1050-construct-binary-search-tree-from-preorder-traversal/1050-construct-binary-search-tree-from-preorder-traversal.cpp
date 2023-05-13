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

    TreeNode* buildbst(TreeNode* root,int data){
        if(root==NULL){
        TreeNode* temp = new TreeNode(data);
        return temp;
        }

        if(data<root->val)
         root->left=buildbst(root->left,data);
        else
        root->right=buildbst(root->right,data);

        return root;

    }


public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size()-1;
        int s=0;

        TreeNode* root = NULL;

   for(int i=0;i<preorder.size();i++)
        root = buildbst(root,preorder[i]);
        
        
        return root;
    }
};