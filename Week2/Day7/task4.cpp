/* 171. Excel Sheet Column Number
Given a column title as appear in an Excel sheet, return its corresponding column number.*/


int titleToNumber(string s) {
        int t=0,ans=0;
        for(int i=s.length()-1;i>=0;i--){
            ans+=(s[i]-64)*pow(26,t);
            t++;
        }
        return ans;
}