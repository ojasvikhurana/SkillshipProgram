/*225. Implement Stack using Queues
Implement the following operations of a stack using queues.
push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element
empty() -- Return whether the stack is empty.*/

queue<int>q1;
    queue<int>q2;
    
    /** Initialize your data structure here. */
    MyStack() {
        while(!q1.empty())q1.pop();
        while(!q2.empty())q2.pop();
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q1.size()==0)return -1;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans= q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }
    
    /** Get the top element. */
    int top() {
        if(q1.size()==0)return -1;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans= q1.front();
        q2.push(ans);
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }