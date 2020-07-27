/*Given a weighted, undirected and connected graph. The task is to find the sum of weights of the edges of the Minimum Spanning Tree.*/

typedef pair<int,pair<int,int>> pii;
// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation, with V vertices.
// graph[i][j] = weight if edge exits else INT_MAX
int parent[1001];
int superparent(int n){
    if(parent[n]==n)return n;
    parent[n]=superparent(parent[n]);
    return parent[n];
}

int spanningTree(int V, int E, vector<vector<int>> &graph) {
    // code here
    
    for(int i=1;i<=V;i++){
        parent[i]=i;
    }
    vector<pii>pq;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(graph[i][j]!=INT_MAX){
                graph[j][i]=INT_MAX;
                pq.push_back({graph[i][j],{i+1,j+1}});
            }
        }
    }
    sort(pq.begin(),pq.end(),[](pii p1,pii p2){
        return p1.first<p2.first;
    });
    int sum=0;
    for(int i=0;i<pq.size();i++){
        pii temp=pq[i];
        int a=temp.second.first;
        int b=temp.second.second;
        int spa=superparent(a);
        int spb=superparent(b);
        if(spa!=spb){
            sum+=temp.first;
            
            parent[spb]=spa;
        }
        
    }
    return sum;
}