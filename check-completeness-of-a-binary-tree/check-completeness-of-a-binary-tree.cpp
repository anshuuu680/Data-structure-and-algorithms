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

int countNodes(TreeNode* root){
    if(root == NULL) return 0;
    return 1+countNodes(root->left)+countNodes(root->right);
}

bool CBT(TreeNode* root,int i,int count){
    if(root == NULL)
    return true;
    if(i>=count) 
    return false;
    else{
    return (CBT(root->left,2*i+1,count) && CBT(root->right,2*i+2,count));
}
}


public:
    bool isCompleteTree(TreeNode* root) {

        return CBT(root,0,countNodes(root));
        
    }
};