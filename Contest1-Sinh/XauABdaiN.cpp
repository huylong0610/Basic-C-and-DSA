#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int a[MAX]; bool ok = true;

void result(int n){
	for(int i=1; i<=n; i++){
		if(a[i]==0){
			cout<<"A";
		}
		else cout<<"B";
	}
	cout<<" ";
}

void nextBit(int n){
	int i = n;
	while(i>0 && a[i]!=0){
		a[i] = 0;
		i--;
	}
	if(i>0)	a[i] = 1;
	else ok = false;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i=1; i<=n; i++){
			a[i] = 0;
		}
		ok = true;
		while(ok){
			result(n);
			nextBit(n);
		}
		cout<<endl;
	}
	return 0;
}
