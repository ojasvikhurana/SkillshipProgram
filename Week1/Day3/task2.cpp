#include <iostream>
using namespace std;
#define ll long long
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll b[10]={0};
	    ll count=0;
	    for(ll i=0;i<n;i++){
	        ll num;
	        cin>>num;
	        while(num!=0){
	            ll dig=num%10;
	            if(b[dig]==0){
	                b[dig]=1;
	                count++;
	            }
	            num=num/10;
	            if(count==10)break;
	        }
	        if(count==10)break;
	    }
	    for(int i=0;i<10;i++){
	        if(b[i]==1)
	        cout<<i<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}