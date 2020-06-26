/* 205. Isomorphic Strings
Given two strings s and t, determine if they are isomorphic.
Two strings are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.*/

 bool isIsomorphic(string s, string t) {
        unordered_map<char,char>h;
        unordered_map<char,char>h2;
        if(s.length()!=t.length())return false;
        for(int i=0;i<s.length();i++){
            if(h.find(s[i])==h.end()){
                if(h2.find(t[i])!=h.end())return false;
                h[s[i]]=t[i];
                h2[t[i]]=s[i];
            }else{
                if(h[s[i]]!=t[i])
                    return false;
            }
        }
        return true;
    }