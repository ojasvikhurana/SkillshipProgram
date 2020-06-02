#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k,a[1000001];
	    cin>>n>>k;
	    for(int i=0;i<n;i++)cin>>a[i];
	    int s=0,e=n-1,flag=0;
	    while(s<=e){
	        int mid=e-(e-s)/2;
	        if(a[mid]==k){
	            flag=1;
	            break;
	        }else if(a[mid]>k){
	            e=mid-1;
	        }else{
	            s=mid+1;
	        }
	    }
	    (flag==1)?cout<<"1\n":cout<<"-1\n";
	}
	return 0;
}