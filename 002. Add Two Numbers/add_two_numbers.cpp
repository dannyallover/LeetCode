/*
Written by: dannyallover
Date: 08/15/2018

Description:
You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order and each of their nodes contain a single digit.
Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.

Notes: I was actually asked this question during my Visa interview.

Time Complexity: O(N)
Space Complexity: O(1)
*/

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
