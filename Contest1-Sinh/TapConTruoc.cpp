#include<bits/stdc++.h>
using namespace std;

void nextCombination(int n, int k, int a[]){
	int i = 0;
	while(i<k && a[i] != n-k+i){
		i++;
	}
	if(i>0){
		a[i] = a[i] -1;
		for(int j=i+1; j<=k; j++){
			a[j] = a[i]+j-i;
		}
	}
	else{
		for(int i=k; i>=1;i--){
			a[i] = n-k+i;
		}
	}
	for(int j=1; j<=k; j++){
		cout<<a[j]<<" ";
	}
}

int main(){
	int t; cin>>t;
	int n, k;
	while (t--) {
		cin>>n>>k;
		int a[k];
		for (int i=1; i<=k; i++) {
			cin>>a[i];
		}
		nextCombination(n, k ,a);
		cout<<endl;
	}
	return 0;
}
