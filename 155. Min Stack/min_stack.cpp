class MinStack {
private:
    vector<int> s;
public:
    /** initialize your data structure here. */
    
    MinStack() {
    }
    
    void push(int x) {
        s.push_back(x);
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        return s[s.size() - 1];
    }
    
    int getMin() {
        int min = INT_MAX;
        for(int i = 0; i < s.size(); i++)
            if(s[i] < min)
                min = s[i];
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
