// https://leetcode.com/problems/last-stone-weight/

class Solution {
public:
    int stoneOperation(int a, int b) {
        if(a > b) return a - b;
        if(b > a) return b - a;
        return -1;
    }
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int x : stones) {
            q.push(x);
        }
        while(!q.empty()) {
            int a = q.top();
            q.pop();
            if(q.empty()) return a;
            int b = q.top();
            q.pop();
            int c = stoneOperation(a, b);
            if(c != -1) q.push(c);
        }
        return 0;
    }
};
