/*1046. Last Stone Weight
We have a collection of stones, each stone has a positive integer weight.
Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  The result of this smash is:
If x == y, both stones are totally destroyed;
If x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.
At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)*/

int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>=2){
            int s1=pq.top();
            pq.pop();
            int s2 = pq.top();
            pq.pop();
            if(s1==s2){
                continue;
            }else{
                pq.push(abs(s1-s2));
            }
        }
        if(pq.empty())return 0;
        return pq.top();
    }