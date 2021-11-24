#include<bits/stdc++.h>
using namespace std;


class Solution {
    
    bool ans=true;
    void dfs(vector<int> adj[],int ind,vector<int> &vis){
      for(auto it:adj[ind]){
          if(vis[it]==-1){
              vis[it]=~vis[ind];
              dfs(adj,it,vis);
          }
          else if(vis[it]==vis[ind])ans=false;
      }
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
	    
	   vector<int> vis(V,-1);
	   for(int i=0;i<V;i++){
	       if(vis[i]==-1){
	           vis[i]=1;
	        dfs(adj,i,vis);
	       }
	   }
	   return ans;
	    
	}

};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
