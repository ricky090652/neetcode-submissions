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
    //在dfs的過程中，只要遇到某個點的值大於他之前路徑的最大值，就更新最大值，並且當下的node就會是一個good node
    void dfs(TreeNode* node, int maxi, int &sum){//sum用傳址因為要在不同次遞迴值需要保留
        if(!node) return;
        
        if(node->val >= maxi){
            maxi = node->val;
            sum++;
        }
        dfs(node->right, maxi, sum);
        dfs(node->left, maxi, sum);
    }
};
