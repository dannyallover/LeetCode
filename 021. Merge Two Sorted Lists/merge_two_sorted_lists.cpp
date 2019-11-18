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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *curr = head;
        
        int min = INT_MAX;
        while(l1 || l2) {
            min = INT_MAX;
            if(l1 && l2) {
                if(l1->val <= l2->val) {
                    min = l1->val;
                    l1 = l1->next;
                }
                else {
                    min = l2->val;
                    l2 = l2->next;
                }
            }
            else if(l1) {
                min = l1->val;
                l1 = l1->next;
            }
            else if(l2) {
                min = l2->val;
                l2 = l2->next;
            }
            curr->next = new ListNode(0);
            curr = curr->next;
            curr->val = min;
                
        }
        
        return head->next;
    }
};
