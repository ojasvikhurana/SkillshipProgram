/*981. Time Based Key-Value Store
Create a timebased key-value store class TimeMap, that supports two operations.
1. set(string key, string value, int timestamp)
Stores the key and value, along with the given timestamp.
2. get(string key, int timestamp)
Returns a value such that set(key, value, timestamp_prev) was called previously, with timestamp_prev <= timestamp.
If there are multiple such values, it returns the one with the largest timestamp_prev.
If there are no values, it returns the empty string ("").*/


 unordered_map<int,string>h;
     unordered_map<string,vector<int>>kt;
    /** Initialize your data structure here. */
    TimeMap() {
        h.clear();
        kt.clear();
    }
    
    void set(string key, string value, int timestamp) {
        h[timestamp]=value;
        if(kt.find(key)==kt.end()){
            vector<int>v;
            kt[key]=v;
        }
        kt[key].push_back(timestamp);
    }
    
    string get(string key, int timestamp) {
        if(kt.find(key)==kt.end())return "";
        int ans=-1;
        ans=upper_bound(kt[key].begin(),kt[key].end(),timestamp)-kt[key].begin();
        ans--;
        if(ans>=0 and kt[key][ans]<=timestamp)return h[kt[key][ans]];
        return "";
    }