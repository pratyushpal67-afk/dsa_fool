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
        return Height(root) != -1;
    }

    int Height(TreeNode* root) {
        if(root == nullptr) return 0;

        int lt = Height(root->left);
        if(lt == -1 )return -1;
        int rt = Height(root->right);
        if(rt == -1) return -1;

        if(abs(rt - lt) > 1) return -1;
        return max(lt, rt) + 1;
    }
};