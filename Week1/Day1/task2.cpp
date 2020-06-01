#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum=(n*(n+1))/2;
	    int csum=0;
	    for(int i=0;i<n-1;i++){
	        int a;
	        cin>>a;
	        csum+=a;
	    }
	    cout<<sum-csum<<"\n";
	}
	return 0;
}