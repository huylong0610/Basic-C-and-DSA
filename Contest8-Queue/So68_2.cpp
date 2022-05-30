#include<bits/stdc++.h>
using namespace std;

void result(int n){
	int res = 0;
	for(int i=1; i<=n; i++){
		res += pow(2,i);
	}
	cout<<res<<endl;
	queue<string> q;
	q.push("6"); q.push("8");
	int i=0;	
	while(i<res){
		string a = q.front(); q.pop();
		cout<<a<<" ";
		string b=a;
		q.push(b+"6");
		q.push(b+"8");
		i++;
	}
	
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		result(n);
		cout<<endl;
	}
	return 0;
}
