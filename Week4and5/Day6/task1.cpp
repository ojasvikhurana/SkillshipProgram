/* 136. Single Number
Given a non-empty array of integers, every element appears twice except for one. Find that single one.*/

int singleNumber(vector<int>& nums) {
        int num=0;
        for(int i=0;i<nums.size();i++){
            num=num^nums[i];
        }
        return num;
    }