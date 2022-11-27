// https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, bool> nodes;
        while(headA != NULL) {
            nodes[headA] = true;
            headA = headA->next;
        }
        while(headB != NULL) {
            if(nodes[headB])
                return headB;
            else
                headB = headB->next;
        }
        return NULL;
    }
};
