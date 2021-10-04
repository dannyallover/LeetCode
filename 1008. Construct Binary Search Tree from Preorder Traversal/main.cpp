// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/

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
    TreeNode* helper(vector<int>& preorder, int &index, int max) {
        if(index >= preorder.size() || preorder[index] > max) return NULL;
        int val = preorder[index];
        TreeNode* node = new TreeNode(val);
        index++;
        node->left = helper(preorder, index, val);
        node->right = helper(preorder, index, max);
        return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return helper(preorder, index, INT_MAX);
    }
};
