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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int min = INT_MAX;
        int posMin = 0;
        bool nodesLeft = true;
        ListNode* combined = new ListNode(0);
        ListNode* head = combined;
        while(nodesLeft) {
            nodesLeft = false;
            min = INT_MAX;
            for(int i = 0; i < lists.size(); i++) {
                if(lists[i]) {
                    nodesLeft = true;
                    if(lists[i]->val < min) {
                        min = lists[i]->val;
                        posMin = i;
                    }
                }
            }
            if(!nodesLeft)
                return head->next;
            combined->next = new ListNode(0);
            combined->next->val = min;
            combined = combined->next;
            lists[posMin] = lists[posMin]->next;
        }
        
        return head->next;
    }
};
