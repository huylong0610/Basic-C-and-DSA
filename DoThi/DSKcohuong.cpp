#include<bits/stdc++.h>
using namespace std;

vector<int> *adj;

void graph(){
	int v, e; cin>>v>>e;
	adj = new vector<int>[v+1];
	
	for(int i=0; i<e; i++){
		int u,k; cin>>u>>k;
		adj[u].push_back(k);
	}
	
	for(int u=1; u<=v; u++){
		cout<<u<<": ";
		for(int i=0; i<adj[u].size(); i++){
			cout<<adj[u][i]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		graph();
	}
}

