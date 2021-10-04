// https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/

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
    void helper(TreeNode* node, int &currSum) {
        if(node->right) helper(node->right, currSum);
        currSum += node->val;
        node->val = currSum;
        if(node->left) helper(node->left, currSum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        helper(root, sum);
        return root;
    }
};
