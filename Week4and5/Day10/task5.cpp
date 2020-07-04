/* 42. Trapping Rain Water
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.*/


int trap(vector<int>& height) {
        if(height.empty())return 0;
        vector<int>left(height.size(),0);
        vector<int>right(height.size(),0);
        int maxl=height[0];
        for(int i=1;i<height.size();i++){
            left[i]=maxl;
            maxl=max(maxl,height[i]);
        }
        int maxr=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            right[i]=maxr;
            maxr=max(maxr,height[i]);
        }
        int ans=0;
        for(int i=0;i<height.size();i++){
            int cans=min(left[i],right[i])-height[i];
            if(cans<0)cans=0;
            ans+=cans;
        }
        return ans;
    }