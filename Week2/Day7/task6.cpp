/* 557. Reverse Words in a String III
Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.*/

string reverseWords(string s) {
        int l=0,r=0;
        while(r<s.length()){
            while(r<s.length() and s[r]!=' '){
                r++;
            }
            int st=l,e=r-1;
            while(st<e){
                char temp=s[st];
                s[st]=s[e];
                s[e]=temp;
                st++;
                e--;
            }
            l=r+1;
            r++;
        }
        return s;
}