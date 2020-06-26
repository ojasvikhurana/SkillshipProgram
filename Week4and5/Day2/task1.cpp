/*Given an array of 0s and 1s. Find the length of the largest subarray with equal number of 0s and 1s.*/

int maxLen(int arr[], int N)
{   
    unordered_map<int,int>h;
    for(int i=0;i<N;i++){
        if(arr[i]==0)
        arr[i]=-1;
    }
    int csum=0,maxlen=0;
    for(int i=0;i<N;i++){
        csum+=arr[i];
        if(csum==0){
            maxlen=i+1;
        }
        if(h.find(csum)!=h.end()){
            maxlen=max(maxlen,i-h[csum]);
        }else{
            h[csum]=i;
        }
    }
    return maxlen;
    
}
