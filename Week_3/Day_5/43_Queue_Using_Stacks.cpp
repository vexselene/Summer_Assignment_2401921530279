class MyQueue {
private:
    std::stack<int> in; // for queue.push()
    std::stack<int> out; // for pop() and front()

    void transfer() {
        while(!in.empty()) {
            out.push(in.top());
            in.pop();
        }
    }
public:
    MyQueue() {}
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        if(out.empty()) transfer();
        int front = out.top();
        out.pop();
        return front;
    }
    
    int peek() {
        if(out.empty()) transfer();
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */