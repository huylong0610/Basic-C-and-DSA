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
			if(temp<=n) dem++;
			else ok = 0;
			q.push(temp*10);
			q.push(temp*10+1);
		}
		cout<<dem<<endl;
	}
	return 0;
}
