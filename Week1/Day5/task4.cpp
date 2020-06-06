/*Given a sorted array and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,ans=-1;
        while(s<=e){
            int mid=e-(e-s)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target){
                ans=mid;
                s=mid+1;
            }else
                e=mid-1;
        }
        return ans+1;
    }
};