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
    int minDepth(TreeNode* root) {
        if (!root)
            return 0;
        if (!root->left && !root->right)
            return 1;
        int leftDepth = INT_MAX;
        if (root->left)
            leftDepth = minDepth(root->left);
        int rightDepth = INT_MAX;
        if (root->right)
            rightDepth = minDepth(root->right);

        return min (leftDepth, rightDepth) + 1;    
    }
};