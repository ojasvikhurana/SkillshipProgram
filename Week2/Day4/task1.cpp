/*  Pattern matching
https://www.geeksforgeeks.org/naive-algorithm-for-pattern-searching/   */


#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,pat;
    cin>>s>>pat;
    int arr[pat.length()];
    arr[0]=0;
    int len=0,i=1;
    while(i<pat.length()){
        if(pat[i]==pat[len]){
            len++;
            arr[i]=len;
            i++;
        }else{
            if(len!=0){
                len=arr[len-1];
            }else{
                arr[i]=0;
                i++;
            }
        }
    }
    i=0;
    int j=0;
    while(i<s.length()){
        if(pat[j]==s[i]){
            i++;
            j++;
        }
        if(j==pat.length()){
            cout<<"Pattern found at "<<i-j<<"\n";
            j=arr[j-1];
        }
        else if(i<s.length() and s[i]!=pat[j]){
            if(j!=0)
                j=arr[j-1];
            else
                i++;
        }
    }
    return 0;
}