/* 453. Minimum Moves to Equal Array Elements
Given a non-empty integer array of size n, find the minimum number of moves required to make all array elements equal, 
where a move is incrementing n - 1 elements by 1. */

int minMoves(vector<int>& nums) {
        int mine=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            mine=min(mine,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]-mine;
        }
        return sum;
}
