#include<bits/stdc++.h>
using namespace std;

void nextPermutation(int n, int a[]){
	int i = n-1;
	while(i>0 && a[i]>a[i+1]){
		i--;
	}
	if(i>0){
		int k = n;
		while(a[i]>a[k]){
			k--;
		}
		swap(a[i], a[k]);
		
		int l = i+1, r = n;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
	else{
		for(int i=1; i<=n; i++){
			a[i] = i;
		}
	}
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[1000];
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		nextPermutation(n,a);
	}
	return 0;
}
