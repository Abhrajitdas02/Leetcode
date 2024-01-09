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
private:
    void inorder(TreeNode* root,vector<int> &v){
        if(root){
        inorder(root->left,v);
        if(!root->left && !root->right)
            v.push_back(root->val);
        inorder(root->right,v);
       }
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int> v,v1;
       inorder(root1,v);
        inorder(root2,v1);
        return v==v1;
    }
};