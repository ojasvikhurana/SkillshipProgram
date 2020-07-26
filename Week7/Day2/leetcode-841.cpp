/*841. Keys and Rooms
There are N rooms and you start in room 0.  Each room has a distinct number in 0, 1, 2, ..., N-1, and each room may have some keys to access the next room. 
Formally, each room i has a list of keys rooms[i], and each key rooms[i][j] is an integer in [0, 1, ..., N-1] where N = rooms.length.  A key rooms[i][j] = v opens the room with number v.
Initially, all the rooms start locked (except for room 0). 
You can walk back and forth between rooms freely.
Return true if and only if you can enter every room.*/


 bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>visited(rooms.size(),false);
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int top=q.front();
            q.pop();
            visited[top]=true;
            for(int i=0;i<rooms[top].size();i++){
                if(visited[rooms[top][i]]==false){
                    q.push(rooms[top][i]);
                }
            }
        }
        for(int i=0;i<rooms.size();i++){
            if(visited[i]==false)return false;
        }
        return true;
    }