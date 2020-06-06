/* Given an integer array, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order, too.

You need to find the shortest such subarray and output its length.*/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int s=-1,e=-1;
        vector<int>nums2=nums;
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums.size();i++){
           if(nums2[i]!=nums[i]){
               s=i;
               break;
           }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=nums2[i]){
                e=i;
                break;
            }
        }
        if(s==-1 and e==-1 )return 0;
        return e-s+1;
    }
};