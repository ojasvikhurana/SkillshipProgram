/* 705. Design HashSet
Design a HashSet without using any built-in hash table libraries.
To be specific, your design should include these functions:
add(value): Insert a value into the HashSet. 
contains(value) : Return whether the value exists in the HashSet or not.
remove(value): Remove a value in the HashSet. If the value does not exist in the HashSet, do nothing.*/


vector<int>v;
    /** Initialize your data structure here. */
    MyHashSet() {
        v.clear();
    }
    
    void add(int key) {
        if(contains(key))return;
        v.push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key))return;
        auto it=find(v.begin(),v.end(),key);
        v.erase(it);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(find(v.begin(),v.end(),key)==v.end())return false;
        return true;
    }