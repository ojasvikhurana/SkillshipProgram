/*260. Single Number III
Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.*/


vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        int bit=0;
        for(int i=0;i<32;i++){
            if(x>>i & 1){
                bit=i;
                break;
            }
        }
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>>bit & 1)
                a^=nums[i];
        }
        vector<int>ans;
        ans.push_back(a);
        ans.push_back(x^a);
        return ans;
        
    }