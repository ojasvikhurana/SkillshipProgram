/*Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.*/

typedef pair<int,pair<int,int>>pi;
int *mergeKArrays(int arr[][N], int k)
{
//code here
int len=k*k;
    int *a= new int[len];
    
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    for(int i=0;i<k;i++){
        pq.push({arr[i][0],{i,0}});
    }
    int i=0;
    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        a[i++]=it.first;
        if(it.second.second<k-1){
            it.second.second++;
            pq.push({arr[it.second.first][it.second.second],{it.second.first,it.second.second}});
        }
    }
    
    return a;
}