/* 933. Number of Recent Calls
Write a class RecentCounter to count recent requests.
It has only one method: ping(int t), where t represents some time in milliseconds.
Return the number of pings that have been made from 3000 milliseconds ago until now.
Any ping with time in [t - 3000, t] will count, including the current ping
It is guaranteed that every call to ping uses a strictly larger value of t than before.*/

queue<int>q;
    RecentCounter() {
        while(!q.empty())q.pop();
    }
    
    int ping(int t) {
        if(q.empty()){
            q.push(t);
        }else{
            while(!q.empty() and t-q.front()>3000){
                q.pop();
            }
            q.push(t);
        }
        return q.size();
    }