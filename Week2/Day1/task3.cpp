/* 54. Spiral Matrix

Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.*/


 vector<int> spiralOrder(vector<vector<int>>& matrix) {
       
        vector<int>ans;
         if(matrix.size()==0) return ans;
        int r=matrix[0].size()-1,l=0,t=0,d=matrix.size()-1;
        while(l<=r and t<=d){
            for(int i=l;i<=r;i++){
                ans.push_back(matrix[t][i]);
            }
            t++;
            if(t>d)break;
            for(int i=t;i<=d;i++)ans.push_back(matrix[i][r]);
            r--;
            if(r<l)break;
            for(int i=r;i>=l;i--)ans.push_back(matrix[d][i]);
            d--;
            if(d<t)break;
            for(int i=d;i>=t;i--){
                ans.push_back(matrix[i][l]);
            }
            l++;
        }
        return ans;
    }