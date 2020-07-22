/*1221. Split a String in Balanced Strings
Balanced strings are those who have equal quantity of 'L' and 'R' characters.
Given a balanced string s split it in the maximum amount of balanced strings.
Return the maximum amount of splitted balanced strings.*/

int balancedStringSplit(string s) {
        int r=0,l=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R')r++;
            else l++;
            if(r==l){
                ans++;
                l=0;
                r=0;
            }
        }
        return ans;
    }