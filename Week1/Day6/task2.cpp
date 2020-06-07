/* given an array example ar= { 1,2,3,4,5} of size n
and q set of queries and x for each q. Queries can be of two types
1 - left rotate array by x times
2 - right rotate array by x times
return the array after perfroming q set of queries

Sample case 1:
ar = { 4,7,9,0,4}
q=3
1 3
2 8
1 9
2 2
1 2
Ans : {4,4,7,9,0} */



#include<iostream>
using namespace std;

int main(){
    int n,q,ar[100000];
    cin>>n;
    for(int i=0;i<n;i++)cin>>ar[i];
    cin>>q;
    int frot=0;
    for(int i=0;i<q;i++){
        int dir,am;
        cin>>dir>>am;
        if(dir==1)frot-=am;
        else frot+=am;
    }
    if(frot>0){
        frot%=n;
        int count=1;
        for(int i=0;count<=n;i++){
            int curr=i;
            int prev=ar[i];
            do{
                int next=(curr+frot)%n;
                int temp=ar[next];
                ar[next]=prev;
                prev=temp;
                curr=next;
                count++;
            }while(curr!=i);
        }
    }else if(frot<0){
        frot=abs(frot);
        frot%=n;
        int count=1;
        for(int i=0;count<=n;i++){
            int curr=i;
            int prev=ar[i];
            do{
                int next=(curr-frot+n)%n;
                int temp=ar[next];
                ar[next]=prev;
                prev=temp;
                curr=next;
                count++;
            }while(curr!=i);
        }
    }
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
}