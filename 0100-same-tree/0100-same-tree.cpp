class Solution {
public:
    bool preOreder(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) return true;

        if(p == nullptr || q == nullptr) return false;

        if(p->val != q->val) return false;

        bool left = preOreder(p->left, q->left);
        bool right = preOreder(p->right, q->right);

        return left && right;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return preOreder(p, q);
    }
};