// https://leetcode.com/problems/path-sum-iii/

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
    int pathSumHelper(TreeNode* root, int sum, int currSum) {
        if(root) currSum += root->val;
        else return 0;

        if(currSum == sum) return pathSumHelper(root->left, sum, currSum) + pathSumHelper(root->right, sum, currSum) + 1;
        return pathSumHelper(root->left, sum, currSum) + pathSumHelper(root->right, sum, currSum);
    }

    int pathSum(TreeNode* root, int sum) {
        queue<TreeNode*> bfs;
        bfs.push(root);
        int total = 0;
        while(!bfs.empty()) {
            TreeNode* currRoot = bfs.front();
            if(currRoot) {
                bfs.push(currRoot->left);
                bfs.push(currRoot->right);
            }
            total += pathSumHelper(currRoot, sum, 0);
            bfs.pop();
        }
        return total;
    }
};
