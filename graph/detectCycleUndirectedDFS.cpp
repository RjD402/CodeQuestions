#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
    bool check(int node, int par, vector<int>& vis, vector<int> adj[]){
        vis[node] = 1;
        for(auto it: adj[node]){
            if(vis[it]==0){
                if(check(it, node, vis, adj)) return true;
            }else if(it!=par){
                return true;
            }
        }
        return false;
    }

    public:
    bool isCycle(int V, vector<int> adj[]){
        vector<int> vis(V+1, 0);
        for(int i=1;i<=V;i++){
            if(!vis[i]){
                if(check(i, -1, vis, adj)) return true;
            }
        }
    }

    return false;
}



int main(){

    return 0;
}