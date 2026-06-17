class MinStack {
private:
    std::stack<int> stk;
    std::stack<int> minstk;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(minstk.empty()) minstk.push(val);
        else if (val <= minstk.top()) {
            minstk.push(val);
        }
    }
    
    void pop() {
        if(!stk.empty() && !minstk.empty()) {
            if(stk.top() == minstk.top()) {
                stk.pop();
                minstk.pop();
            } else stk.pop();
        }
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minstk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */