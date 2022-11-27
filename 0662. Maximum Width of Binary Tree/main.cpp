// https://leetcode.com/problems/maximum-width-of-binary-tree/

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
    int widthOfBinaryTree(TreeNode* root) {
        queue<TreeNode*> nodes;
        queue<int> depth;
        queue<int> pos;
        if(root) {
            nodes.push(root);
            depth.push(0);
            pos.push(0);
        }
        int currDepth = 0;
        int end = 0;
        int length = 0;
        while(!nodes.empty()) {
            TreeNode* n = nodes.front();
            int d = depth.front();
            int p = pos.front();
            if(d != currDepth) {
                currDepth = d;
                end = p;
            }
            if(n->left) {
                nodes.push(n->left);
                depth.push(d+1);
                pos.push(2*(p-end));
            }if(n->right) {
                nodes.push(n->right);
                depth.push(d+1);
                pos.push(2*(p-end)+1);
            }
            length = max(length, p-end+1);
            nodes.pop();
            depth.pop();
            pos.pop();
        }
        return length;
    }
};
