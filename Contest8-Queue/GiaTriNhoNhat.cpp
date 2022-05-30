#include<bits/stdc++.h>
#include<queue>
using namespace std;

void result(int k, string s){
	priority_queue<long long> pq;
	long long d[30] = {0};
	for(int i=0; i<s.size(); i++){
		d[s[i]-'A']++;
	}
	for(int i=0; i<27; i++){
		if(d[i]) pq.push(d[i]);
	}
	if(k){
		while(k--){
			long long l = pq.top();
			if(pq.top()==0) break;
			pq.pop();
			l--;
			pq.push(l);
		}
	}
	long long res = 0;
	while(!pq.empty()){
		res+=(pq.top()*pq.top());
		pq.pop();
	}
	cout<<res<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		long long k; cin>>k;
		string s; cin>>s;
		result(k,s);
	}
	return 0;
}
