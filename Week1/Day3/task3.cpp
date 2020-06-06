/*Given a matrix A, return the transpose of A.

The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>>ans;
        ans.resize(A[0].size());
         for(int j=0;j<A[0].size();j++){
             for(int i=0;i<A.size();i++){
                 ans[j].push_back(A[i][j]);
             }
         }
        return ans;
    }
};