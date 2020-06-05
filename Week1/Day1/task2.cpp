/*Vaibhav likes to play with numbers and he has n numbers. One day he was placing the numbers on the playing board just to 
count that how many numbers he have. He was placing the numbers in increasing order i.e. from 1 to n. But when he was putting 
the numbers back into his bag, some numbers fell down onto the floor. He picked up all the numbers but one number, he couldn't 
find. Now he have to go somewhere urgently, so he asks you to find the missing number.*/


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