/*137. Single Number II
Given a non-empty array of integers, every element appears three times except for one, which appears exactly once. Find that single one.*/


int singleNumber(vector<int>& nums) {
        int ans=0;
        vector<int>v(32,0);
        for(int i=0;i<32;i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if((nums[j]>>i)&1)count++;
            }
            if(count%3!=0){
                ans+=1<<i;
            }
        }
        return ans;
        
    }