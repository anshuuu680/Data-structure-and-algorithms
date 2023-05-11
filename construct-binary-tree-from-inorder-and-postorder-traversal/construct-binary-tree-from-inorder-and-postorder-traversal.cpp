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

  void fillmap(map<int ,int>&mp , vector<int>&inorder ,int n){
    for(int i = 0 ; i < n ; i ++){
        mp[inorder[i]] = i;
    }
}

TreeNode* solve(vector<int>&post , vector<int>&in , int s ,int  e  , map<int ,int>&mp,int &postIndex)
{
        if(s > e || postIndex < 0 ){
            return NULL;
        }

        int element = post[postIndex--];

        TreeNode* root = new TreeNode(element);

        int position = mp[element];

        root->right = solve(post, in , position + 1  , e , mp,postIndex);
        root->left = solve(post, in , s , position - 1  , mp,postIndex);
        
        return root;
}
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         int n = postorder.size();
         map<int, int> mp;
        fillmap(mp , inorder , n);
        int postIndex = n-1;


        return solve(postorder , inorder, 0 , n - 1 , mp,postIndex);

    }
};