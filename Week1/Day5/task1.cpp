/* Given two arrays, write a function to compute their intersection.*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> h;
        vector<int> ans;        
        for(int i=0;i<nums1.size();i++)
            h[nums1[i]]=true;
        for(int i=0;i<nums2.size();i++){
            if(h.find(nums2[i])!=h.end()){
                if(h[nums2[i]]==true){
                    ans.push_back(nums2[i]);
                    h[nums2[i]]=false;
                }
            }
        }
        return ans;
    }
};