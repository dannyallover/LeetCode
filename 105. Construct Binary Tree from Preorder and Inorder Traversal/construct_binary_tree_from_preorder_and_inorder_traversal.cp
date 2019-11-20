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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& root, int left, int right) {
        if(left > right) return NULL;
        int pivot = left;
        while(inorder[pivot] != preorder[root]) pivot++;
        
        root++;
        TreeNode* node = new TreeNode(inorder[pivot]);
        node->left = build(preorder, inorder, root, left, pivot - 1);
        node->right = build(preorder, inorder, root, pivot + 1, right);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int root = 0;
        return build(preorder, inorder, root, 0, inorder.size() - 1);
    }
};
