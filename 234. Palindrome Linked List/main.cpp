// https://leetcode.com/problems/palindrome-linked-list/

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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;

        ListNode* end = head;
        int length = 0;
        while(end) {
            length++;
            end = end->next;
        }

        //cout << length << endl;

        int half = (length + 1) / 2;
        ListNode* mid = head;
        while(half--) {
            mid = mid->next;
        }

        //cout << mid->val << endl;

        ListNode* flipped = mid;
        ListNode* prev = NULL;
        while(flipped) {
            ListNode* next = flipped->next;
            flipped->next = prev;
            prev = flipped;
            flipped = next;
        }

        ListNode* tail = prev;
        while(head && tail) {
            if(head->val != tail->val) {
                return false;
            }
            head = head->next;
            tail = tail->next;
        }

        return true;
    }
};
