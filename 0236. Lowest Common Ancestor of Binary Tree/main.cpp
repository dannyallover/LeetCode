// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

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
    bool findPath(TreeNode* root, int target, vector<TreeNode*> &path) {
        if(!root) return false;

        path.push_back(root);

        if(root->val == target) {
            return true;
        }

        if((root->left && findPath(root->left, target, path)) || (root->right && findPath(root->right, target, path))) {
            return true;
        }

        path.pop_back();

        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1;
        vector<TreeNode*> path2;
        findPath(root, p->val, path1);
        findPath(root, q->val, path2);

        int i = 0;
        while(i < path1.size() && i < path2.size() && path1[i]->val == path2[i]->val) {
            i++;
        }

        return path1[i-1];
    }
};
