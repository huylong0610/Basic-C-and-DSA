#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		long long dem = 0;
		bool ok = true;
		queue<long long> q;
		q.push(1);
		
		while(ok){
			long long temp = q.front();	q.pop();
			if(temp%n == 0 && temp/n >1){
				cout<<temp<<endl;
				ok = false;
			}
			q.push(temp*10);
			q.push(temp*10+1);
		}
	}
	return 0;
}
