/* Given an array, rotate the array to the right by k steps, where k is non-negative.*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==0)return;
        k%=nums.size();
        int count=1;
        for(int i=0;count<=nums.size();i++){
            int curr=i;
            int prev=nums[i];
            do{
                int next=(curr+k)%nums.size();
                int temp=nums[next];
                nums[next]=prev;
                prev=temp;
                curr=next;
                count++;
            }while(curr!=i);
        }
    }
};