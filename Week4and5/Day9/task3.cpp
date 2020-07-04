/*155. Min Stack
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.*/


 stack<int>s1;
    stack<int>s2;
    /** initialize your data structure here. */
    MinStack() {
        while(!s1.empty())s1.pop();
        while(!s2.empty())s2.pop();
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty() or x<s2.top())s2.push(x);
        else s2.push(s2.top());
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }