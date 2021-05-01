//time complexity of the solution is 
//O(N+E) N is time taken for visiting N nodes and E is for travelling through adjacent node overall. 

//space complexity 
//O(N+E) + O(N) + O(N)
//space for adj list, vis array, auxillary space

void dfs(int node, vector<int>& vis, vector<int> adj[], vector<int>& storeDfs){
    storeDfs.push_back(node);
    vis[node] = 1;
    for(auto& it: adj[node]){
        if(!vis[it]){
            dfs(it, vis, adj, storeDfs);
        }
    }
});

vector<int> dfsOfGraph(int V, vector<int> adj[]){
    vector<int> storeDfs;
    vector<int> vis(V+1, 0);
    for(int i=1;i<=V;i++){
        if(!vis[i]){
            dfs(i, vis, adj, storeDfs);
        }
    }
    return storeDfs;
}