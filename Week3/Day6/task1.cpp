/* 146. LRU Cache
Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and put.
get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
put(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.
The cache is initialized with a positive capacity.*/


 int count=0;
    int cap;
    list<int>l;
    unordered_map<int,int>m;
    unordered_map<int,list<int>::iterator>hlist;
    LRUCache(int capacity) {
        m.clear();
        l.clear();
        hlist.clear();
        cap=capacity;
    }
    
    int get(int key) {
        if(m.find(key)==m.end())return -1;
        int val=m[key];
        l.erase(hlist[key]);
        l.push_front(key);
        hlist[key]=l.begin();
        return val;
    }
   
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            l.erase(hlist[key]);
            count--;
        }
        if(count==cap){
      //      cout<<m[l.back()]<<key<<value<<"\n";
            m.erase(l.back());
            hlist.erase(l.back());
            l.pop_back();
            count--;
        }
        
        m[key]=value;
        l.push_front(key);
        hlist[key]=l.begin();
        count++;
    }