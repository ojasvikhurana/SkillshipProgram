/* Given an all upper case string, check if it is a combination of one or more of the following:
1) R
2) RY
3) RYY
*/
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int flag=1;
	    for(int i=0;i<s.length();){
	        if(i+2<s.length() and s[i]=='R' and s[i+1]=='Y' and s[i+2]=='Y')
	        i+=3;
	        else if(i+1<s.length() and s[i]=='R' and s[i+1]=='Y')
	        i+=2;
	        else if(s[i]=='R')
	        i++;
	        else{
	            flag=0;
	            break;
	        }
	    }
	    if(flag)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}