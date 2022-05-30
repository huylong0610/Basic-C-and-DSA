#include<bits/stdc++.h>
using namespace std;

bool *chuaxet;
vector<int> *adj;

void Graph(int V, int E){
	adj = new vector<int>[V+1];
	
	for(int i=0; i<E; i++){
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
}

void init(int V){
	chuaxet = new bool[V+1];
	for(int i=0; i<=V; i++){
		chuaxet[i] = true;
	}
}

void BFS(int u){
	queue<int> q; q.push(u);
	chuaxet[u] = false;
	while(!q.empty()){
		int s = q.front(); q.pop();
		cout<<s<<" ";
		for(int t=0; t<adj[s].size(); t++){
			int j = adj[s][t];
			if(chuaxet[j]){
				q.push(j);
				chuaxet[j] = false;
			}
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int V, E, u; cin>>V>>E>>u;
		init(V);
		Graph(V,E);
		BFS(u);
		cout<<endl;
	}
	return 0;
}
