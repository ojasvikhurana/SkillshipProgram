vector<int> topoSort(int V, vector<int> adj[]) {
    // Your code here
    vector<int>indegree(V,0);
    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();j++){
            
            indegree[adj[i][j]]++;
        }
    }
   // for(int i=0;i<indegree.size();i++)cout<<indegree[i];
    queue<int>q;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0)
        q.push(i);
    }
    vector<int>ans;
    while(!q.empty()){
        int top=q.front();
        q.pop();
        ans.push_back(top);
        for(int i=0;i<adj[top].size();i++){
            indegree[adj[top][i]]--;
            if(indegree[adj[top][i]]==0){
                q.push(adj[top][i]);
            }
        }
    }
  
    return ans;
}
