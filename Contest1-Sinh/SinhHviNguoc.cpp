#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int a[MAX]; bool ok = true;

void result(int n){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	}
	cout<<" ";
}
void nextPermu(int n, int a[]){
	int i = n-1;
	while(i>0 && a[i]<a[i+1]){
		i--;
	}
	if(i>0){
		int k = n;
		while(a[i]<a[k]){
			k--;
		}
		swap(a[i],a[k]);
		
		int l = i+1, r = n;
		while(l<r){
			swap(a[l],a[r]);
			l++; r--;
		}
	}
	else ok = false;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i=1; i<=n; i++){
			a[i] = n-i+1;
		}
		ok = true;
		while(ok){
			result(n);
			nextPermu(n,a);
		}
		cout<<endl;
	}
	return 0;
}
