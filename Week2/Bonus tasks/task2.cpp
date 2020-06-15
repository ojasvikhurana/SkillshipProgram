/*You are given a string A, consisting of '(', ')', '[', ']', '{' and '}' only. You have to find the maximum length of the balanced string after performing some valid operation(s).
Valid operations are
Remove any character from string A
Swap any two adjacent characters of string A
You can perform these valid operations in any order and any numbers of times.*/

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ob=0,cb=0,ocur=0,ccur=0,osq=0,csq=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(')ob++;
			else if(s[i]==')')cb++;
			else if(s[i]=='{')ocur++;
			else if(s[i]=='}')ccur++;
			else if(s[i]=='[')osq++;
			else csq++;
		}
		int ans=0;
		ans+=min(cb,ob)+min(ocur,ccur)+min(osq,csq);
		cout<<ans*2<<'\n';
	}
}
