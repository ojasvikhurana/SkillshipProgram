/*347. Top K Frequent Elements
Given a non-empty array of integers, return the k most frequent elements.*/

vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> elementFreq;
        vector<int> result;
        for (auto number : nums) {
            elementFreq[number]++;
        }
        
        typedef pair<int,int> P;        
        priority_queue <P, vector<P>, greater<P>> pq;
        int count = 0;
        for (auto iter : elementFreq) {
            if (count == k) {
                if (iter.second > pq.top().first) {
                    pq.pop();
                    pq.push({iter.second, iter.first});
                } 
            } else {
                    pq.push({iter.second, iter.first});
                    ++count;
            }
        }
        while(!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;        
    }