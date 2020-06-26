/*242. Valid Anagram
Given two strings s and t , write a function to determine if t is an anagram of s.*/


ool isAnagram(string s, string t) {
        unordered_map<char,int>h;
        for(int i=0;i<26;i++){
            h[char(97+i)]=0;
            //cout<<char(97+i);
        }
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++){
            h[s[i]]++;
            h[t[i]]--;
        }
        for(int i=0;i<26;i++){
            if(h[char(97+i)]!=0)
                return false;
        }
        return true;
    }