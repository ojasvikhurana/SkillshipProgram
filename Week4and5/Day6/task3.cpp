/*201. Bitwise AND of Numbers Range
Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.*/

int rangeBitwiseAnd(int m, int n) {
    int count=0;
    while(m!=n){
        m=m>>1;
        n=n>>1;
       // cout<<m<<n;
        count++;
    }
    return m<<count;
}