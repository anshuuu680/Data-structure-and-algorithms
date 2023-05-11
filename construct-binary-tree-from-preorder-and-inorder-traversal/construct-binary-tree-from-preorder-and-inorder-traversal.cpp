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
    private:

        int preIndex = 0;

  void fillmap(map<int ,int>&mp , vector<int>&inorder ,int n){
    for(int i = 0 ; i < n ; i ++){
        mp[inorder[i]] = i;
    }
}

TreeNode* solve(vector<int>&pre , vector<int>&in , int s ,int  e  , map<int ,int>&mp)
{
        if(s > e){
            return NULL;
        }

        int element = pre[preIndex++];

        TreeNode* root = new TreeNode(element);

        int position = mp[element];

        root->left = solve(pre, in , s , position - 1  , mp);
        
        root->right = solve(pre, in , position + 1  , e , mp);

        return root;
}

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        map<int , int>mp;
        fillmap(mp , inorder , n);

        return solve(preorder , inorder, 0 , n - 1 , mp);

    }
};