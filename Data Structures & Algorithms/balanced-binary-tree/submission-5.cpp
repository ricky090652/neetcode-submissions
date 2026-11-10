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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int left = MaxDepth(root->left);
        int right = MaxDepth(root->right);
        return abs(left - right) <= 1 && isBalanced(root->right) && isBalanced(root->left);
    }

    int MaxDepth(TreeNode* root){
        if(!root) return 0;
        return 1 + max(MaxDepth(root->right), MaxDepth(root->left));
    }
};
