#include<bits/stdc++.h>
using namespace std;
//code to detect cycle in a undirected graph using bfs
//time comp - O(N+E)
//space com - O(N+E)+O(N)(vis array)+O(N)(queue)

class Solution{
    public:
    bool check(int s, int V, vector<int> adj[], vector<int>& vis){
        queue<pair<int, int>> q;
        q.push({s,-1});
        vis[s] = 1;

        while(!q.empty()){
            int node = q.front().first;
            //getting the parent of node
            int par = q.front().second;
            q.pop();

            //traverse all adjacent of node
            for(auto& it: adj[node]){
                //if adjcaent node is not visited
                if(!vis[it]){
                    //mark the node as visited
                    vis[it]=true;
                    //insert adjacent node in q and put node as its parent
                    q.push({it, node});
                }else if(it!=par){
                    //if the adjacent node is already visited but its not the parent node of cuurent then it shows the presence of a cycle
                    return true;
                }
            }
        }
        return false;
    }
public:
    bool iscycle(int V, vector<int> adj[]){
        vector<int> vis(V+1, 0);
        for(int i=1;i<=V;i++){
            if(!vis[i]){
                if(check(i,V,adj, vis)) return true;
            }
        }
        return false;
    }
};


int main(){

    return 0;
}