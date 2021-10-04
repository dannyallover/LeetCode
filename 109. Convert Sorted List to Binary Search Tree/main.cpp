// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* buildTree(vector<int> nums, int left, int right) {
        if(left > right) return NULL;
        int mid = (left+right)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = buildTree(nums, left, mid-1);
        root->right = buildTree(nums, mid+1, right);
        return root;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        vector<int> nums;
        while(head) {
            nums.push_back(head->val);
            head = head->next;
        }
        TreeNode* root = buildTree(nums, 0, nums.size() - 1);
        return root;
    }
};
