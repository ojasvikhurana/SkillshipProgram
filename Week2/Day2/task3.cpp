/* Danny has a possible list of passwords of Manny's facebook account. All passwords length is odd. But Danny knows that Manny is a big fan of palindromes. So, his password and reverse of his password both should be in the list.

You have to print the length of Manny's password and it's middle character.

Note : The solution will be unique.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;										// Reading input from STD
	unordered_map<string,int>h;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
	    string so=s;
		reverse(s.begin(),s.end());
		if(h.find(s)!=h.end()){
			cout<<s.length()<<" "<<s[s.length()/2];
		}
		h[so]=1;
	}
}