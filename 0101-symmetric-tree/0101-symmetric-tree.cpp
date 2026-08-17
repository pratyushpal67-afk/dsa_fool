class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;

        return isSymmetrTree(root->left, root->right);
    }

    bool isSymmetrTree(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr)
            return true;

        if (left == nullptr || right == nullptr)
            return false;

        if (left->val != right->val)
            return false;

        return isSymmetrTree(left->left, right->right) &&
               isSymmetrTree(left->right, right->left);
    }
};