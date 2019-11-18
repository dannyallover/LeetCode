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
    ListNode* swapPairs(ListNode* head) {
        if(!head)
            return head;
        ListNode* behind = head;
        ListNode* ahead = head->next;

        int temp = 0;
        int skip = 2;
        while(behind && ahead) {
            if(skip % 2 == 0) {
                temp = behind->val;
                behind->val = ahead->val;
                ahead->val = temp;
                behind = behind->next;
                ahead = ahead->next;
                skip++;
            }
            else {
                behind = behind->next;
                ahead = ahead->next;
                skip++;
            }
        }

        return head;
    }
};
