// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

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
    void flatten(TreeNode* root) {
        if(!root) return;
        TreeNode* ll = new TreeNode(0);
        stack<TreeNode*> dfs;
        dfs.push(root);
        while(!dfs.empty()) {
            TreeNode* node = dfs.top();
            dfs.pop();
            if (node->right) dfs.push(node->right);
            if (node->left) dfs.push(node->left);
            if (!dfs.empty()) node->right = dfs.top();
            else node->right = NULL;
            node->left = NULL;
        }
    }
};
