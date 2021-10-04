// https://leetcode.com/problems/cousins-in-binary-tree/

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
    pair<TreeNode*, int> dfs(TreeNode*root, TreeNode* parent, int val, int depth) {
        if(!root) return {NULL, -1};
        if(root->val == val) return {parent, depth};
        pair<TreeNode*, int> depth1 = dfs(root->left, root, val, depth + 1);
        pair<TreeNode*, int> depth2 = dfs(root->right, root, val, depth + 1);
        if(depth1.first) return depth1;
        else if(depth2.first) return depth2;
        return {NULL, -1};
    }
    bool isCousins(TreeNode* root, int x, int y) {
        pair<TreeNode*, int> depth1 = dfs(root, NULL, x, 0);
        pair<TreeNode*, int> depth2 = dfs(root, NULL, y, 0);
        return depth1.first != depth2.first && depth1.second == depth2.second;
    }
};
