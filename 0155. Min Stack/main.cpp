// https://leetcode.com/problems/min-stack/

class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stack;
    vector<int> mins;
    MinStack() {
        stack.clear();
        mins.clear();
    }

    void push(int x) {
        stack.push_back(x);
        if(mins.size() && mins.back() < x) mins.push_back(mins.back());
        else mins.push_back(x);
    }

    void pop() {
        stack.pop_back();
        mins.pop_back();
    }

    int top() {
        return stack.size() ? stack.back() : INT_MIN;
    }

    int getMin() {
        return mins.size() ? mins.back() : INT_MAX;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
