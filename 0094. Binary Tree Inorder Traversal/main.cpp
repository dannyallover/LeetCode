// https://leetcode.com/problems/binary-tree-inorder-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * }; && root->left
 */
class Solution {
public:
    void helper(TreeNode* root, vector<int> &iot) {
        if(root && root->left) helper(root->left, iot);
        if(root) iot.push_back(root->val);
        if(root && root->right) helper(root->right, iot);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> iot;
        helper(root, iot);
        return iot;
    }
};
