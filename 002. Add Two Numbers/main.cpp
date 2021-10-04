// https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        bool carry = false;
        while(l1 || l2) {
            int num = 0;
            if(l1) {
                num += l1->val;
                l1 = l1->next;
            } if(l2) {
                num += l2->val;
                l2 = l2->next;
            }
            if(carry) num++;
            if(num > 9) carry = true;
            else if(num <= 9) carry = false;
            temp->next = new ListNode(num%10);
            temp = temp->next;
        }
        if(carry) temp->next = new ListNode(1);
        return head->next;
    }
};
