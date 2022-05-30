#include<bits/stdc++.h>
using namespace std;

void result(long long int n, long long int a[]){
	stack<long long int > st;
	st.push(a[0]);
	
	for(long long int i=1; i<n; i++){
		if(st.empty()){
			st.push(a[i]);
			continue;
		}
		
		while(!st.empty() && st.top()<a[i]){
			cout<<a[i]<<" ";
			st.pop();
		}
		
		st.push(a[i]);
	}
	
	while(!st.empty()){
		cout<<"-1"<<" ";
		st.pop();
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		long long int n; cin>>n;
		long long int a[100001];
		for(long long int i=0; i<n; i++){
			cin>>a[i];
		}
		result(n,a);
	}
}
