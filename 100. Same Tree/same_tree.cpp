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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)
            return true;
        if(p == NULL)
            return false;
        if(q == NULL)
            return false;
                
        queue<TreeNode*> tree1;
        queue<TreeNode*> tree2;
        tree1.push(p);
        tree2.push(q);
        
        while(tree1.size() > 0 || tree2.size() > 0) {
            TreeNode* node1 = tree1.front();
            TreeNode* node2 = tree2.front();
            int val1 = 0;
            int val2 = 0;
            if(node1) {
                val1 = node1->val;
                cout << val1 << endl;
                tree1.pop();
            }
            if(node2) {
                val2 = node2->val;
                cout << val2 << endl;
                tree2.pop();
            }
            if(val1 != val2) {
                return false;
            }
            if(node1->left && node2->left) {
                tree1.push(node1->left);
                tree2.push(node2->left);
            }
            else if(node1->left) {
                return false;
            }
            else if(node2->left) {
                return false;
            }
            if(node1->right && node2->right) {
                tree1.push(node1->right);
                tree2.push(node2->right);
            }
            else if(node1->right) {
                return false;
            }
            else if(node2->right) {
                return false;
            }
        }
        
        return true;  
    }
};
