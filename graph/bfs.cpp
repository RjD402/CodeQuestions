#include<bits/stdc++.h>
using namespace std;

void bfs(int i,vector<int> & t,vector<int>& vis,vector<int> adj[]){
    queue<int> q;
    q.push(i);
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        t.push_back(temp);
         for(auto& x: adj[temp]){
            if(!vis[x]){
                vis[x] = 1;
                q.push(x);
            }
        }
    }
}

int main(){
    int n,m,a,b;
    cin>>n>>m;
    //n7, m 6
    vector<int> adj[n];
    vector<int> vis(n,0);
    vector<int> t;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i =0;i<n;i++){
        if(!vis[i]){
            vis[i] = 1;
            bfs(i,t,vis, adj);
        }
    }

    for(auto& x: t){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}