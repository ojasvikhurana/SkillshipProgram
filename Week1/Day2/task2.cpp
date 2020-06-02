class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            int s=0,e=grid[0].size()-1,flag=0;
            int cans=grid[i].size();
            while(s<=e){
                int mid=e-(e-s)/2;
                if(grid[i][mid]<0){
                    cans=mid;
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }
            ans+=grid[i].size()-cans;
        }
        return ans;
    }
};