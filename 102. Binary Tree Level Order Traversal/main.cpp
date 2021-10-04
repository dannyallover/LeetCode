// https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    void lohelper(vector<TreeNode*> level, vector<vector<int>> &lo) {
        vector<int> levelVals;
        vector<TreeNode*> nextLevel;
        for(TreeNode* node: level) {
            if(node) levelVals.push_back(node->val);
            if(node && node->left) nextLevel.push_back(node->left);
            if(node && node->right) nextLevel.push_back(node->right);
        }
        if(levelVals.size() > 0) lo.push_back(levelVals);
        if(nextLevel.size() > 0) lohelper(nextLevel, lo);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> lo;
        vector<TreeNode*> level;
        level.push_back(root);
        lohelper(level, lo);
        return lo;
    }
};
