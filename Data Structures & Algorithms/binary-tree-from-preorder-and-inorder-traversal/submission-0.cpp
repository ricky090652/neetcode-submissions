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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        if (preorder.empty()) return nullptr;

        TreeNode* node = new TreeNode(preorder[0]);

        int pos = 0;
        for(int i = 0; i < preorder.size(); i++){
            if(preorder[0] == inorder[i]){

                pos = i;
                break;
                }
        }       

        vector<int> subin_left(inorder.begin(), inorder.begin() + pos);
        vector<int> subin_right(inorder.begin() + pos + 1, inorder.end());
        vector<int> subpre_left(preorder.begin() + 1, preorder.begin() + 1 + pos);
        vector<int> subpre_right(preorder.begin() + 1 + pos, preorder.end());
        node->left = buildTree(subpre_left, subin_left);
        node->right = buildTree(subpre_right, subin_right);
        return node;
    }

};
