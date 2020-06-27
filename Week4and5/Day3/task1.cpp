/* 451. Sort Characters By Frequency
Given a string, sort it in decreasing order based on the frequency of characters.*/


static bool comp(pair<char,int>p1,pair<char,int>p2){
       return p1.second>p2.second;
    }
    string frequencySort(string s) {
        if(s.length()==0)return s;
        string ans="";
        unordered_map<char,int>h;
        for(int i=0;i<s.length();i++){
            if(h.find(s[i])==h.end())
                h[s[i]]=1;
            else h[s[i]]++;
        }
        vector<pair<char,int>>v(h.begin(),h.end());
        sort(v.begin(),v.end(),comp);
        for(auto it:v){
            while(it.second){
                ans+=it.first;
                it.second--;
            }
        }
        return ans;
    }