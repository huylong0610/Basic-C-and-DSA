#include<bits/stdc++.h>
using namespace std;

void result(int n){
	queue<long long> q;
	q.push(9);
	while(!q.empty()){
		long long x = q.front();
		q.pop();
		if(x%n == 0){
			cout<<x<<endl;
			break;
		}
		else{
			q.push(x*10);
			q.push(x*10+9);
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		result(n);
	}
	return 0;
}
