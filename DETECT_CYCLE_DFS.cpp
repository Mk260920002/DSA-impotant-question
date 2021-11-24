#include <bits/stdc++.h>
using namespace std;


class Solution {
    
    void dfs(vector<int> adj[],int vis[],int ind,int prev,bool &ans){
        vis[ind]=1;
        for(auto it:adj[ind]){
            if(vis[it]==0){
              dfs(adj,vis,it,ind,ans);  
            }
            else if(it!=prev && vis[it]==1){
                ans=false;
                return;
            }
        }
    }
  public:
   
    bool isCycle(int V, vector<int> adj[]) {
        
        bool ans=true;
        int visited[V];
        for(int i=0;i<V;i++) visited[i]=0;
        int ind;
        for(int i=0;i<V;i++){
            if(visited[i]==0){
                  dfs(adj,visited,i,-1,ans);
            }
        }
      
        return !ans;
        
    }
};


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
