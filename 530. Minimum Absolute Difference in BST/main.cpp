// https://leetcode.com/problems/minimum-absolute-difference-in-bst/

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
    int min1 = INT_MAX;
    TreeNode* prev;
    int getMinimumDifference(TreeNode* root) {
        if(!root)
            return min1;
        getMinimumDifference(root->left);
        if(prev)
            min1 = min(min1, root->val - prev->val);
        prev = root;
        getMinimumDifference(root->right);
        return min1;
    }
};
