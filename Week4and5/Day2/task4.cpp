/*706. Design HashMap
Design a HashMap without using any built-in hash table libraries.
To be specific, your design should include these functions:
put(key, value) : Insert a (key, value) pair into the HashMap. If the value already exists in the HashMap, update the value.
get(key): Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.
remove(key) : Remove the mapping for the value key if this map contains the mapping for the key.*/

vector<int>vk;
    vector<int>vv;
    /** Initialize your data structure here. */
    MyHashMap() {
        vk.clear();
        vv.clear();
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        auto it =find(vk.begin(),vk.end(),key);
        if(it==vk.end()){
            vk.push_back(key);
            vv.push_back(value);
        }else{
            int index=it-vk.begin();
            vv[index]=value;
        }
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
         auto it =find(vk.begin(),vk.end(),key);
        if(it==vk.end()){
           return -1;
        }else{
            int index=it-vk.begin();
            return vv[index];
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
         auto it =find(vk.begin(),vk.end(),key);
        if(it==vk.end()){
           return ;
        }else{
            int index=it-vk.begin();
            vk.erase(it);
            vv.erase(vv.begin()+index);
        }
    }