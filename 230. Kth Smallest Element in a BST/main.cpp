// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    void inorder(TreeNode* root, vector<int> &ordered) {
        if(root && root->left) inorder(root->left, ordered);
        if(root) ordered.push_back(root->val);
        if(root && root->right) inorder(root->right, ordered);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ordered;
        inorder(root, ordered);
        return ordered[k-1];
    }
};
