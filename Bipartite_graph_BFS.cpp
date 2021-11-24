#include<bits/stdc++.h>
using namespace std;

 
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    queue<int> q;
	    vector<int > colored(V,-1);
	    for(int i=0;i<V;i++){
	        if(colored[i]==-1){
	          q.push(i);
	          colored[i]=1;
	        } 
	        while(!q.empty()){
	            int k=q.front();
	            q.pop();
	            int col=colored[k];
	            for(auto it:adj[k]){
	                if(colored[it]==-1){
	                    q.push(it);
	                    colored[it]=~col;
	                }
	                if(colored[it]==col){
	                    return false;
	                }
	            }
	        }
	    }
	    return true;
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
