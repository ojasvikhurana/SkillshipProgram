/*You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. And all elements occur 
once except two numbers which occur twice. Find the two repeating numbers.*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int count=0;
	    unordered_map<int,int>h;
	    cin>>n;
	    for(int i=0;i<n+2;i++){
	        int num;
	        cin>>num;
	        if(h.find(num)!=h.end()){
	            count++;
	            cout<<num<<" ";
	        }
	        if(count==2)break;
	        h[num]=1;
	    }
	    cout<<"\n";
	}
	return 0;
}