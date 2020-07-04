/*78. Subsets
Given a set of distinct integers, nums, return all possible subsets (the power set).
Note: The solution set must not contain duplicate subsets.*/

vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        for(int i=0;i<=pow(2,nums.size())-1;i++){
            vector<int>v2;
            for(int j=0;j<nums.size();j++){
                if(i>>j & 1){
                    v2.push_back(nums[j]);
                }
            }
            v.push_back(v2);
        }
        return v;
    }