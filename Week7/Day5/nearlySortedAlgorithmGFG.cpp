/*Given an array of n elements, where each element is at most k away from its target position. The task is to print array in sorted form.*/
#include <iostream>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[100];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        int num=a[i];
	        int j=i-1;
	        while(j>=0 and a[j]>num){
	            a[j+1]=a[j];
	            j--;
	        }
	        a[j+1]=num;
	    }
	    for(int i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}