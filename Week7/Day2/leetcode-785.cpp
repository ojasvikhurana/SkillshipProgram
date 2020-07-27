/*785. Is Graph Bipartite?
Given an undirected graph, return true if and only if it is bipartite.
Recall that a graph is bipartite if we can split it's set of nodes into two independent subsets A and B such that every edge in the graph has one node in A and another node in B.
The graph is given in the following form: graph[i] is a list of indexes j for which the edge between nodes i and j exists.  Each node is an integer between 0 and graph.length - 1.  There are no self edges or parallel edges: graph[i] does not contain i, and it doesn't contain any element twice.*/

bool func(vector<vector<int>>& graph,vector<bool>&visited,vector<int>&color,int v,int clr){
        if(visited[v]==true){
            if(color[v]!=clr)return false;
            return true;
        }
        visited[v]=true;
        if(color[v]==-1 or color[v]==clr)color[v]=clr;
        else return false;
        for(int i=0;i<graph[v].size();i++){
            bool val = func(graph,visited,color,graph[v][i],!clr);
            if(val==false)return false;
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<bool>visited(graph.size(),false);
        int clr=0;
        vector<int>color(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(!visited[i]){
                bool val=func(graph,visited,color,i,clr);
                if(val==false)return false;
            }
        }
        return true;
    }