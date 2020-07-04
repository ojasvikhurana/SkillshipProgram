/*895. Maximum Frequency Stack
Implement FreqStack, a class which simulates the operation of a stack-like data structure.
FreqStack has two functions:
push(int x), which pushes an integer x onto the stack.
pop(), which removes and returns the most frequent element in the stack.
If there is a tie for most frequent element, the element closest to the top of the stack is removed and returned.*/

 unordered_map<int,int>freq;
    unordered_map<int,stack<int>>gr;
    int maxfreq;
    FreqStack() {
        maxfreq = 0;
        freq.clear();
        gr.clear();
    }
    
    void push(int x) {
        freq[x]++;
        maxfreq=max(maxfreq,freq[x]);
        gr[freq[x]].push(x);
    }
    
    int pop() {
        int x = gr[maxfreq].top();
        gr[maxfreq].pop();
        freq[x]--;
        if(gr[maxfreq].size()==0)maxfreq--;
        return x;
    }