// https://leetcode.com/problems/reverse-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* rev = head;
        ListNode *prev = NULL, *next = NULL;
        while(rev) {
            next = rev->next;
            rev->next = prev;
            prev = rev;
            rev = next;
        }
        head = prev;

        return head;
    }
};
