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
    int ans=0; 
     
      void  check(TreeNode* root, int& k) {
        if (!root) return;
         check(root->left, k);
        if (--k == 0){
            ans = root->val;
            return;
        } 
         check(root->right, k);

    }
    
public:
    int kthSmallest(TreeNode* root, int k) {
        
        check(root,k);
     return ans;

    }
};