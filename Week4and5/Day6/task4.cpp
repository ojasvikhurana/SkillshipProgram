/*169. Majority Element
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority element always exist in the array.*/

int majorityElement(vector<int>& nums) {
    int majele=nums[0],count=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=majele)
            count--;
        else
            count++;
        if(count==0){
            majele=nums[i];
            count=1;
        }
    }
    return majele;
}