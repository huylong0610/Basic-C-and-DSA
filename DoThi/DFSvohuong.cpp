#include<bits/stdc++.h>
using namespace std;

bool *chuaxet;
vector<int> *adj;

void init(int V){
	chuaxet = new bool[V+1];
	for(int i=0; i<=V; i++){
		chuaxet[i] = true;
	}
}

void DFS_Stack(int u){
	stack <int> stk;stk.push(u);chuaxet[u]=false;
	cout<<u<<" ";
	while(!stk.empty()){
		int s = stk.top(); stk.pop();
		for(int t=0; t<adj[s].size(); t++){
			if(chuaxet[adj[s][t]]){
				cout<<adj[s][t]<<" "; chuaxet[adj[s][t]] =false;
				stk.push(s); stk.push(adj[s][t]);
				break;
			}
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int V, E, u;
		cin>>V>>E>>u;
		
		init(V);
		adj = new vector<int>[V+1];
		
		for(int i=0; i<E; i++){
			int u,v; cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
		DFS_Stack(u);
		cout<<endl;
	}
	return 0;
}
