/* Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] 
you have to count the number of valid j's such that j != i and nums[j] < nums[i].
Return the answer in an array.*/

class Solution {
public:
    bool static comp(pair<int,int>p1,pair<int,int>p2){
        return p1.first<=p2.first;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        unordered_map<int,int>h;
        vector<int>ans(nums.size(),0);
        h[v[0]]=0;
        for(int i=1;i<v.size();i++){
            if(v[i]!=v[i-1]){
                h[v[i]]=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=h[nums[i]];
        }
        return ans;
    }
};