// https://leetcode.com/problems/path-sum-ii/

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
    void dfs(vector<vector<int>> &paths, vector<int> p, TreeNode* node, int sum, int currSum) {
        if(node == NULL) return;
        int val = node->val;
        currSum += val;
        p.push_back(val);
        if(currSum == sum && node->left == NULL && node->right == NULL) paths.push_back(p);
        if(node->left) dfs(paths, p, node->left, sum, currSum);
        if(node->right) dfs(paths, p, node->right, sum, currSum);
        p.pop_back();
        currSum -= val;
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> paths;
        vector<int> p;
        dfs(paths, p, root, sum, 0);
        return paths;
    }
};
