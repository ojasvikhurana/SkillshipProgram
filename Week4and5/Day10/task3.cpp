/*Given a postfix expression, the task is to evaluate the expression and print the final value. Operators will only include the basic arithmetic operators like *,/,+ and - . */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' and s[i]<='9'){
                st.push(s[i]-'0');
            }else{
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                int ans;
                if(s[i]=='+')st.push(a+b);
                else if(s[i]=='-')st.push(a-b);
                else if(s[i]=='*')st.push(a*b);
                else st.push(a/b);
                
            }
        }
        cout<<st.top()<<"\n";
    }
	return 0;
}