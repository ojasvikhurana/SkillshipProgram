/*1387. Sort Integers by The Power Value
The power of an integer x is defined as the number of steps needed to transform x into 1 using the following steps:
if x is even then x = x / 2
if x is odd then x = 3 * x + 1
For example, the power of x = 3 is 7 because 3 needs 7 steps to become 1 (3 --> 10 --> 5 --> 16 --> 8 --> 4 --> 2 --> 1).
Given three integers lo, hi and k. The task is to sort all integers in the interval [lo, hi] by the power value in ascending order, if two or more integers have the same power value sort them by ascending order.
Return the k-th integer in the range [lo, hi] sorted by the power value.
Notice that for any integer x (lo <= x <= hi) it is guaranteed that x will transform into 1 using these steps and that the power of x is will fit in 32 bit signed integer.*/


int getKth(int lo, int hi, int k) {
        vector<int>dp(hi+1,-1);
        dp[1]=0;
        vector<pair<int,int>>p;
        for(int i=lo;i<=hi;i++){
            int ans=0;
            int j=i;
            while(j!=1){
                if(j<=hi and dp[j]!=-1){
                    ans+=dp[j];
                    break;
                }
                if(j%2)j=(3*j)+1;
                else j=j/2;
                ans++;
            }
            dp[i]=ans;
            p.push_back({ans,i});
        }
        sort(p.begin(),p.end());
        return p[k-1].second;
    }