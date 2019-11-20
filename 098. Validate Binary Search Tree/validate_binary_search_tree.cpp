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
    bool isValidBSTHelper(TreeNode* root, long lower, long upper) {
        if(!root) {
            return true;
        }
        
        int val = root->val;
        if(val <= lower || val >= upper)
            return false;
        
        return isValidBSTHelper(root->left, lower, val) && isValidBSTHelper(root->right, val, upper);
    }
    
    bool isValidBST(TreeNode* root) {
        return isValidBSTHelper(root, numeric_limits<long>::min(), numeric_limits<long>::max());
    }
};
