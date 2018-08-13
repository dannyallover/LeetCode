/*
Written by: dannyallover
Date: 7/8/2018

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

Runtime: My runtime beats 100% of cpp submissions
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
        ListNode *head = new ListNode(0);
        ListNode *curr = head;
        int val1, val2, sum;
        int rem = 0;
        while(l1 != NULL || l2 != NULL) {
            val1 = (l1 != NULL) ? l1->val : 0;
            val2 = (l2 != NULL) ? l2->val : 0;
            sum = val1 + val2 + rem;
            rem = (sum > 9) ? (sum / 10) : 0;
            sum = sum % 10;
            curr->next = new ListNode(sum);
            curr = curr->next;
            if(l1 != NULL)
                l1 = l1->next;
            if(l2 != NULL)
                l2 = l2->next;
        }
        if(rem > 0)
            curr->next = new ListNode(rem);
        return head->next;
    }
};
