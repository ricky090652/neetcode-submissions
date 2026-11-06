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
        int right = MaxDepth(root->right);
        int left = MaxDepth(root->left);
        
        return abs(left - right) <= 1 && 
               isBalanced(root->left) && 
               isBalanced(root->right);

    }
    
    int MaxDepth(TreeNode* root){
        if(!root) return 0;
        return 1 + max(MaxDepth(root->right), MaxDepth(root->left));
    }
};
