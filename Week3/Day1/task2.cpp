/* Given a number N, calculate the prime numbers upto N using Sieve of Eratosthenes.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool prime[n+1];
	    memset(prime,1,sizeof(prime));
	    for(int i=2;i*i<=n;i++){
	        if(prime[i]){
	            for(int j=i*i;j<=n;j+=i){
	                prime[j]=false;
	            }
	        }
	    }
	    for(int i=2;i<=n;i++){
	        if(prime[i])
	        cout<<i<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}