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
    int goodNodes(TreeNode* root) {
        int sum = 0;
        dfs(root, root->val, sum);
        return sum;
    }

    int dfs(TreeNode* node, int maxi, int &sum){
        if(!node) return 0;
        
        if(node->val >= maxi){
            maxi = node->val;
            sum++;
        }
        dfs(node->right, maxi, sum);
        dfs(node->left, maxi, sum);
        return sum;
    }
};
