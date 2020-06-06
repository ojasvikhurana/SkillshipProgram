/* Given an array of integers and an integer k, you need to find the number of unique k-diff pairs in the array. Here a k-diff pair is defined as an integer pair (i, j), where i and j are both numbers in the array and their absolute difference is k.*/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.size()<2)return 0;
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(i!=0 and nums[i]==nums[i-1])
                continue;
            auto pos=lower_bound(nums.begin()+i+1,nums.end(),k+nums[i]);
            if(nums[pos-nums.begin()]==k+nums[i])count++;
        }
        return count;
    }
};