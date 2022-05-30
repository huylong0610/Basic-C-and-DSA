#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	queue<int> q;
	while(t--){
		string s; cin>>s;
		if(s=="PUSH"){
			int a; cin>>a;
			q.push(a);
		}
		if(s=="POP"){
			if(!q.empty()) q.pop();
			else continue;
		}
		if(s=="PRINTFRONT"){
			if(!q.empty()) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
	return 0;
}
