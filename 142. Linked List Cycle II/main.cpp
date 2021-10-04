// https://leetcode.com/problems/linked-list-cycle-ii/

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
    bool iscycle(ListNode *head) {
        ListNode *slow;
        ListNode *fast;
        if(head && head->next && head->next->next) {
            slow = head->next;
            fast = head->next->next;
        }
        while(slow && fast) {
            if(slow == fast) return true;
            if(slow) slow = slow->next;
            if(fast) fast = fast->next;
            if(fast) fast = fast->next;
        }
        return false;
    }
    int lenCycle(ListNode *head) {
        ListNode *slow = head->next;
        ListNode *fast = head->next->next;
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next->next;
        }
        int length = 1;
        slow = slow->next;
        while(slow != fast) {
            slow = slow->next;
            length++;
        }
        return length;
    }
    ListNode *startCycle(ListNode *head) {
        int length = lenCycle(head);
        ListNode *slow = head;
        ListNode *fast = head;
        while(length > 0) {
            fast = fast->next;
            length--;
        }
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    ListNode *detectCycle(ListNode *head) {
        if(!iscycle(head)) return NULL;
        return startCycle(head);
    }
};
