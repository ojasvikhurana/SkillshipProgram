/*Given a connected undirected graph. Perform a Depth First Traversal of the graph.
Note: Use recursive approach.*/

vector<int> func(vector<int>g[],vector<bool>&visited,int N,vector<int>&ans,int i){
    if(visited[i]){
        return ans;
    }
    visited[i]=true;
    ans.push_back(i);
    for(int j=0;j<g[i].size();j++){
        if(!visited[g[i][j]]){
            func(g,visited,N,ans,g[i][j]);
        }
    }
    return ans;
}

vector <int> dfs(vector<int> g[], int N)
{
    
    vector<int>ans;
    vector<bool>visited(N,false);
    return func(g,visited,N,ans,0);

}