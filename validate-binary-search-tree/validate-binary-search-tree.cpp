
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

    long long int ans = LLONG_MIN;

 bool check(TreeNode* root , bool &a){

     if(root==NULL)
     return NULL;

     

     check(root->left,a);
     if(ans < root->val)
     ans=root->val;
     else
     a = false;

     check(root->right,a);

     return a;

    

 }

public:
    bool isValidBST(TreeNode* root) {
       bool a = true;
      return check(root,a);
        
    }
};