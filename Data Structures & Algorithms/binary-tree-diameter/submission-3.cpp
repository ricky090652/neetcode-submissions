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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            int left = MaxDepth(node->left);
            int right = MaxDepth(node->right);
            int depth = left + right;
            if(node->right) q.push(node->right);
            if(node->left) q.push(node->left);
            ans = max(depth,ans);
            
        }
        return ans;
    }


    int MaxDepth(TreeNode* root){
        if(!root) return 0;
        return 1 + max(MaxDepth(root->right), MaxDepth(root->left));
    }
};
