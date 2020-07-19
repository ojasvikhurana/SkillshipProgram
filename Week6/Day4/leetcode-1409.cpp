/* 1409. Queries on a Permutation With Key
Given the array queries of positive integers between 1 and m, you have to process all queries[i] (from i=0 to i=queries.length-1) according to the following rules:
In the beginning, you have the permutation P=[1,2,3,...,m].
For the current i, find the position of queries[i] in the permutation P (indexing from 0) and then move this at the beginning of the permutation P. Notice that the position of queries[i] in P is the result for queries[i].
Return an array containing the result for the given queries.
 */


vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>ans;
        vector<int>p;
        for(int i=1;i<=m;i++)p.push_back(i);
        for(int i=0;i<queries.size();i++){
            int pos=find(p.begin(),p.end(),queries[i])-p.begin();
            ans.push_back(pos);
            p.erase(pos+p.begin());
            p.insert(p.begin(),queries[i]);
        }
        return ans;
    }