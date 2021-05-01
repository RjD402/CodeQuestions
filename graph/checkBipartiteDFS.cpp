#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> color, vector<int> adj[]){
    if(color[node]==-1) color[node] = 1;

    for(auto it: adj[node]){
        if(color[it]==-1){
            color[it]= 1-color[node];
            if(!dfs(it, color, adj))
                return false;
                //if adjacent node is already coloured with same color
            else if(color[it]==color[node]) return false;
        }
    }
    return true;
}

bool checkBipartite(vector<int> adj[], int n){
    vector<int> color;
    memset(color, -1, sizeof(color));
    //checking for all components
    for(int i=0;i<n;i++){
        if(color[i]==-1){
            if(!dfs(i, color, adj))
                return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(checkBipartite(adj, n))
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}