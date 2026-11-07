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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> a = bfs(p);
        vector<int> b = bfs(q);
        return a==b;
    }
    vector<int> bfs(TreeNode* root){
        queue<TreeNode*> q;
        vector<int> tree;
        q.push(root);

        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node == nullptr){
                tree.push_back(INT_MIN);
                continue;
            }
            int val = node->val;
            tree.push_back(val);
            q.push(node->right);
            q.push(node->left);
        }
        return tree;
    }
};
