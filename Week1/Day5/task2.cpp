/* Given a n x n matrix where each of the rows and columns are sorted in ascending order, find the kth smallest element in the matrix.
Note that it's the kth smallest element in the sorted order, not the kth distinct element.*/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>ar(matrix.size(),0);
        int count=0;
        int mind=-1,mina=INT_MAX;
        for(int i=0;count<k;i++){
            mind=-1,mina=INT_MAX;
            for(int j=0;j<matrix.size();j++){
                if(ar[j]==matrix[j].size())continue;
                if(matrix[j][ar[j]]<mina){
                    mina=matrix[j][ar[j]];
                    mind=j;
                }
            }
            count++;
            ar[mind]++;
        }
        return matrix[mind][ar[mind]-1];
    }
};
