/* 844. Backspace String Compare
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character
Note that after backspacing an empty text, the text will continue empty.*/

bool backspaceCompare(string S, string T) {
        string a="",b="";
        int h=0;
        for(int i=S.length()-1;i>=0;i--){
            if(S[i]=='#')
                h++;
            else{
                if(h>0){
                    h--;
                }else{
                    a=S[i]+a;
                }
            }
        }
        h=0;
        for(int i=T.length()-1;i>=0;i--){
            if(T[i]=='#')
                h++;
            else{
                if(h>0){
                    h--;
                }else{
                    b=T[i]+b;
                }
            }
        }
        if(a==b)return true;
        return false;
    }