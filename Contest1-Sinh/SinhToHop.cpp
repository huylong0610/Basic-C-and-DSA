#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int a[MAX]; bool ok = true;

void result(int k){
	for(int i=1; i<=k; i++){
		cout<<a[i];
	}
	cout<<" ";
}

void nextCombination(int n, int k, int a[]){
	int i = k;
	while(i>0 && a[i]==n-k+i){
		i--;
	}
	if(i>0){
		a[i] = a[i] + 1;
		for(int j=i+1; j<=k; j++){
			a[j] = a[i] + j - i;
		}
	}
	else ok = false;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n, k; cin>>n>>k;
		for(int i=1; i<=k; i++){
			a[i] = i;
		}
		ok=true;	
		while(ok){
			result(k);
			nextCombination(n,k,a);
		}
		cout<<endl;
	}
}
