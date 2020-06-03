class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i=matrix.size()-1;i>=0;i--){
            int m=matrix[i][0],s=i+1,e=1;
            while(s<matrix.size() and e<matrix[0].size()){
                if(matrix[s][e]!=m)
                    return false;
                s++;
                e++;
            }
        }
        for(int i=1;i<matrix[0].size();i++){
            int m=matrix[0][i],s=1,e=i+1;
             while(s<matrix.size() and e<matrix[0].size()){
                if(matrix[s][e]!=m)
                    return false;
                s++;
                e++;
            }
        }
        return true;
    }
};