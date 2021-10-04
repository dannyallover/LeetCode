// https://leetcode.com/problems/maximum-depth-of-binary-tree/

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
    void helper(TreeNode* root, int depth, int &max) {
        if(!root) {
            max = depth > max ? depth : max;
        } else {
            helper(root->left, depth+1, max);
            helper(root->right, depth+1, max);
        }

    }
    int maxDepth(TreeNode* root) {
        int depth = 0;
        int max = 0;
        helper(root, depth, max);
        return max;
    }
};
