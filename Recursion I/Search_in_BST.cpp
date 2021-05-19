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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(val > root->val && root->right != NULL) 
            return searchBST(root->right, val);
        else if(root->val == val)
            return root;
        else if(root == NULL) 
            return NULL;
        else if(val < root->val && root->left != NULL) 
            return searchBST(root->left, val);
        return NULL;
    }
};