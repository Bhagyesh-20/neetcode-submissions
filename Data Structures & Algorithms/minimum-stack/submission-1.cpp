class MinStack {
public:
        stack<int> minStack;
        stack<int> manStack;
    MinStack() {
        
    }
    
    void push(int val) {
        manStack.push(val);

        if(minStack.empty() || val <= minStack.top()){
            minStack.push(val);
        }

    }
    
    void pop() {
        if(minStack.top()==manStack.top()){
            minStack.pop();
        }
        
        manStack.pop();
       
    }
    
    int top() {
        return manStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
