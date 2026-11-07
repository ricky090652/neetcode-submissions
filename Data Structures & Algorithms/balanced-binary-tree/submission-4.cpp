class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }

private:
    // 回傳子樹高度；若子樹已不平衡，則回傳 -1
    int dfs(TreeNode* root) {
        if (!root) return 0;

        int left = dfs(root->left);
        if (left == -1) return -1; // 左子樹已失衡，直接向上回報

        int right = dfs(root->right);
        if (right == -1) return -1; // 右子樹已失衡，直接向上回報

        // 如果左右高度差 > 1，代表當前節點失衡，回傳 -1
        if (abs(left - right) > 1) return -1;

        // 平衡的話正常回傳高度
        return 1 + max(left, right);
    }
};