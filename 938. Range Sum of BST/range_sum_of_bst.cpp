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
    int sol = 0;
    int rangeSumBST(TreeNode* root, int L, int R) {
        dfs(root, L, R);
        return sol;
    }
    
    void dfs(TreeNode* node, int L, int R) {
        if(node != NULL) {
            if(L <= node->val && node->val <= R)
                sol += node->val;
            if (L < node->val)
                dfs(node->left, L, R);
            if (node->val < R)
                dfs(node->right, L, R);
        }
    }
};
