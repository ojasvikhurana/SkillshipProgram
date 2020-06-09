/* 309. Decrypt String from Alphabet to Integer Mapping
Given a string s formed by digits ('0' - '9') and '#' . We want to map s to English lowercase characters as follows:

Characters ('a' to 'i') are represented by ('1' to '9') respectively.
Characters ('j' to 'z') are represented by ('10#' to '26#') respectively. 
Return the string formed after mapping.

It's guaranteed that a unique mapping will always exist.*/

 string freqAlphabets(string s) {
        if(s.empty())return s;
        
        int i=0;
        string ans;
        for(;i<s.length();){
            if(i+2<s.length() and s[i+2]=='#'){
                int n=(s[i]-'0')*10+(s[i+1]-'0');
                ans+=char(n+96);
                i+=3;
            }else{
                int n=s[i]-'0';
                ans+=char(n+96);
                i++;
            }
        }
        return ans;
    }