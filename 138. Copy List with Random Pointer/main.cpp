// https://leetcode.com/problems/copy-list-with-random-pointer/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* h1 = new Node(0);
        Node* h2 = h1;
        Node* h3 = head;
        unordered_map<Node*, Node*> map;
        while(h3) {
            h2->next = new Node(0);
            h2 = h2->next;
            h2->val = h3->val;
            map[h3] = h2;
            h3 = h3->next;
        }

        h2 = h1->next;
        h3 = head;
        while(h3) {
            if(h3->random) h2->random = map[h3->random];
            h2 = h2->next;
            h3 = h3->next;
        }
        return h1->next;
    }
};
