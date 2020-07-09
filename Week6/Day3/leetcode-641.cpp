/*641. Design Circular Deque
Design your implementation of the circular double-ended queue (deque).
Your implementation should support following operations:
MyCircularDeque(k): Constructor, set the size of the deque to be k.
insertFront(): Adds an item at the front of Deque. Return true if the operation is successful.
insertLast(): Adds an item at the rear of Deque. Return true if the operation is successful.
deleteFront(): Deletes an item from the front of Deque. Return true if the operation is successful.
deleteLast(): Deletes an item from the rear of Deque. Return true if the operation is successful.
getFront(): Gets the front item from the Deque. If the deque is empty, return -1.
getRear(): Gets the last item from Deque. If the deque is empty, return -1.
isEmpty(): Checks whether Deque is empty or not. 
isFull(): Checks whether Deque is full or not.*/

 vector<int>dq;
    int s;
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        dq.clear();
        s=k;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(dq.size()==s)return false;
        dq.insert(dq.begin(),value);
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(dq.size()==s)return false;
        dq.push_back(value);
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(dq.empty())return false;
        dq.erase(dq.begin());
        return true;
    }
    
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(dq.empty())return false;
        dq.pop_back();
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(dq.empty())return -1;
        return dq[0];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(dq.empty())return -1;
        return dq[dq.size()-1];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return dq.empty();
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        if(dq.size()==s)return true;
        return false;
    }