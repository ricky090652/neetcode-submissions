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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.size()){
            TreeNode* nd = q.front();
            q.pop();
            if(nd->left) q.push(nd->left);
            if(nd->right) q.push(nd->right);
            TreeNode* tmp = nullptr;
            tmp = nd->left;
            nd->left = nd->right;
            nd->right = tmp;
        }
        return root;
    }
};
