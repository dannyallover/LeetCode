// https://leetcode.com/problems/merge-two-binary-trees/

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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1 && !t2) return NULL;
        TreeNode* t3;
        if(t1 && t2) {
            t3 = new TreeNode(t1->val + t2->val);
            t3->left=mergeTrees(t1->left, t2->left);
            t3->right=mergeTrees(t1->right, t2->right);
        } else if(t1) {
            t3 = new TreeNode(t1->val);
            t3->left=mergeTrees(t1->left, t2);
            t3->right=mergeTrees(t1->right, t2);
        } else if(t2) {
            t3 = new TreeNode(t2->val);
            t3->left=mergeTrees(t1, t2->left);
            t3->right=mergeTrees(t1, t2->right);
        }
        return t3;
    }
};
