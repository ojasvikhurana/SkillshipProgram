/*Given an array of N positive integers, print k largest elements from the array.  The output elements should be printed in decreasing order.*/

#include <iostream>
#include<queue>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[101];
	    for(int i=0;i<n;i++)cin>>a[i];
	    priority_queue<int,vector<int>,greater<int>>pq;
	    for(int i=0;i<k;i++)pq.push(a[i]);
	    for(int i=k;i<n;i++){
	        if(a[i]>pq.top()){
	            pq.pop();
	            pq.push(a[i]);
	        }
	    }
	    int s[k],j=k-1;
	    while(!pq.empty()){
	        s[j--]=pq.top();
	        pq.pop();
	    }
	    for(int i=0;i<k;i++)cout<<s[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}