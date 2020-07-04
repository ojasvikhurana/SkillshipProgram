/*Given an infix expression in the form of a string str. Conver this infix expression to postfix expression.
Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s,ans="";
	    cin>>s;
	    stack<char>st;
	    for(int i=0;i<s.length();i++){
	        if((s[i]>='a' and s[i]<='z') or(s[i]>='A' and s[i]<='Z')){
	            ans+=s[i];
	        }
	        else if(s[i]=='('){
	            st.push(s[i]);
	        }else if(s[i]==')'){
	            while(st.top()!='('){
	                ans+=st.top();
	                st.pop();
	            }
	            st.pop();
	        }else{
	            if(s[i]=='^'){
	                st.push(s[i]);
	            }else if(s[i]=='*' or s[i]=='/'){
	                while(!st.empty() and (st.top()=='^' or st.top()=='/' or st.top()=='*')){
	                    ans+=st.top();
	                    st.pop();
	                }
	                st.push(s[i]);
	            }else{
	                while(!st.empty() and (st.top()=='^' or st.top()=='/' or st.top()=='*' or st.top()=='+' or st.top()=='-')){
	                    ans+=st.top();
	                    st.pop();
	                }
	                st.push(s[i]);
	            }
	        }
	    }
	    while(!st.empty()){
	        ans+=st.top();
	        st.pop();
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}