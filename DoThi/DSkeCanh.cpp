#include<bits/stdc++.h>
using namespace std;

vector<int> *adj;
void graph(){
	int v; cin>>v;
	adj = new vector<int>[v+1];
	
	for(int i=0; i<v; i++){
		int u, k; cin>>u>>k;
		adj[u].push_back(k);
	}
	
	for(int u=1; u<=v; u++){
		for(int i=0; i<adj[u].size(); i++){
			cout<<u<<" "<<adj[u][i]<<endl;
		}
	}
}

int main(){
	graph();
	return 0;
}

