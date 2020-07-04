/*338. Counting Bits
Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.*/

vector<int> countBits(int num) {
        vector<int>v(num+1,0);
        v[0]=0;
        if(num==0)return v;
        v[1]=1;
        if(num==1)return v;
        for(int i=2;i<=num;i++){
            if(i%2!=0){
                v[i]=v[i-1]+1;
            }else{
                v[i]=v[i/2];
            }
        }
        return v;
    }