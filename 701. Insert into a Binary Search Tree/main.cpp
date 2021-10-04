// https://leetcode.com/problems/insert-into-a-binary-search-tree/

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
    void helper(TreeNode* node, int val) {
        if(node->val > val && !node->left) node->left = new TreeNode(val);
        if(node->val > val && node->left) helper(node->left, val);
        if(node->val < val && !node->right) node->right = new TreeNode(val);
        if(node->val < val && node->right) helper(node->right, val);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        helper(root, val);
        return root;
    }
};
