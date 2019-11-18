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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) {
            return NULL;
        } else if(!l1) {
            return l2;
        } else if(!l2) {
            return l1;
        }

        bool carry = false;
        int sum;
        ListNode *head = new ListNode(0);
        ListNode *curr = head;
        while(l1 || l2) {
            sum = 0;
            sum += l1 ? l1->val : 0;
            sum += l2 ? l2->val : 0;
            sum += carry ? 1 : 0;
            carry = false;
            carry = sum > 9 ? true : false;
            sum = sum % 10;
            curr->next = new ListNode(sum);
            curr = curr->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry) {
            curr->next = new ListNode(1);
            curr = curr->next;
        }
        return head->next;
    }
};
