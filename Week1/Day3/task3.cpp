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