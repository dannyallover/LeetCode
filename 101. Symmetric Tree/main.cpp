// https://leetcode.com/problems/symmetric-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* node1, TreeNode* node2) {
        if(node1 == NULL || node2 == NULL)
            return node1 == node2;
        return node1->val == node2->val && dfs(node1->left, node2->right) && dfs(node1->right, node2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return dfs(root->left, root->right);
    }
};
