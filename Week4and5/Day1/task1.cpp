/*961. N-Repeated Element in Size 2N Array
In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.
Return the element repeated N times.
 */


    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int>h;
        for(int i=0;i<A.size();i++){
            if(h.find(A[i])!=h.end())
                return A[i];
            h[A[i]];
        }
        return 0;
    }