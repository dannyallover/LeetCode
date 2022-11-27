// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* beg = head;
        int length = 0;
        while(beg != NULL) {
            beg = beg->next;
            length++;
        }
        length = length - n;
        beg = dummy;
        while(length > 0) {
            length--;
            beg = beg->next;
        }
        beg->next = beg->next->next;
        return dummy->next;
    }
};
