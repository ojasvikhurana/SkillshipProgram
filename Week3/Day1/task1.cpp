/* Given two numbers A and B. The task is to find out their LCM and GCD.*/

#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int a,b;
	    cin>>a>>b;
	    long long int g=gcd(a,b);
	    long long int l=(a*b)/g;
	    cout<<l<<" "<<g<<"\n";
	}
	return 0;
}