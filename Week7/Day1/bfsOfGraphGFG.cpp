/*Given a directed graph. The task is to do Breadth First Search of this graph.*/vector <int> bfs(vector<int> g[], int N) {
    vector<int>ans;
    queue<int>q;
    int len=g->size();
    
    vector<bool>visited(N,false);
    q.push(0);
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        if(visited[tp])continue;
        ans.push_back(tp);
        visited[tp]=true;
        for(int i=0;i<g[tp].size();i++){
            if(!visited[g[tp][i]]){
                q.push(g[tp][i]);
            }
        }
        
    }
    return ans;
}