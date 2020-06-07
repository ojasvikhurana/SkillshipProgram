/* Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)return -1;
        int r=nums.size()-1,l=0;
        while(l<r){
            int mid=l+(r-l)/2;
            cout<<mid;
            if(nums[mid]>nums[r])
                l=mid+1;
            else
                r=mid;
        }
     //cout<<l;
    
        int beg=l;
        l=0,r=nums.size()-1;
        int s=0,e=nums.size()-1;
        if(target>=nums[beg] and target<=nums[r]){
            s=beg;
        }else{
            e=beg-1;
        } 
        
   //     cout<<beg;
     //   cout<<s<<e;
       
        while(s<=e){
            int mid=e-((e-s)/2);
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                s=mid+1;
            else
                e=mid-1;
        }
        return -1;
    }
};