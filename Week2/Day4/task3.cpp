/* 14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".*/

string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        int ans=strs[0].length(),count=0;
        string s=strs[0];
        for(int i=1;i<strs.size();i++){
            count=0;
            int lim;
            (ans>strs[i].length())?lim=strs[i].length():lim=ans;
            for(int j=0;j<lim;j++){
                if(s[j]==strs[i][j])
                    count++;
                else break;
            }
            ans=min(ans,count);
        }
        return s.substr(0,ans);
        
}