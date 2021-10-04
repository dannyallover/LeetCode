// https://leetcode.com/problems/diameter-of-binary-tree/

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
    int search(TreeNode* root, int &d) {
        if(!root) return 0;
        int hL = search(root->left, d);
        int hR = search(root->right, d);
        d = max(d, hL + hR);
        return max(hL, hR) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        search(root, d);
        return d;
    }
};
