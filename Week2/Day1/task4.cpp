/* Spiral Matrix II

Given a positive integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.*/

vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>>ans(n,vector<int>(n,0));
         if(n==0) return ans;
        int r=ans[0].size()-1,l=0,t=0,d=ans.size()-1;
        int count=1;
        while(l<=r and t<=d){
            for(int i=l;i<=r;i++){
                ans[t][i]=count++;
            }
            t++;
            if(t>d)break;
            for(int i=t;i<=d;i++)ans[i][r]=count++;
            r--;
            if(r<l)break;
            for(int i=r;i>=l;i--)ans[d][i]=count++;
            d--;
            if(d<t)break;
            for(int i=d;i>=t;i--){
                ans[i][l]=count++;
            }
            l++;
        }
        return ans;
    }