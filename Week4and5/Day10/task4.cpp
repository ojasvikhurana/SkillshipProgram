/*Given an array A of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array. If no such element exists, output -1 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    ll n,a[10000001];
	    cin>>n;
	    stack<ll>st;
	    for(ll i=0;i<n;i++)cin>>a[i];
	    for(ll i=0;i<n;i++){
	       while(!st.empty() and a[st.top()]<a[i]){
	            a[st.top()]=a[i];
	            st.pop();
	       }
	       st.push(i);
	    }
	    while(!st.empty()){
	        a[st.top()]=-1;
	        st.pop();
	    }
	    for(ll i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}