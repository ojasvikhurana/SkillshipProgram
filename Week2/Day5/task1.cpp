/* 5. Longest Palindromic Substring
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.*/

string longestPalindrome(string s) {
        if(s.length()==0)
            return "";
        int mlen=0,msi=0,mei=0;
        for(int i=0;i<s.length();i++){
            int si=i,ei=i;
            while(si>=0 and ei<s.length() and s[si]==s[ei]){
                if(ei-si+1>mlen){
                    mlen=ei-si+1;
                    msi=si;
                    mei=ei;
                }
                si--;
                ei++;
            }
            si=i,ei=i+1;
            while(si>=0 and ei<s.length() and s[si]==s[ei]){
                if(ei-si+1>mlen){
                    mlen=ei-si+1;
                    msi=si;
                    mei=ei;
                }
                si--;
                ei++;
            }
        }
        return s.substr(msi,mlen);
        
}