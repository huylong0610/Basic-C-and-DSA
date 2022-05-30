#include<bits/stdc++.h>
using namespace std;
bool b[50], ok;

void nextCombination(int n, int k, int a[]){
	int i = k;
	while(i>0 && a[i] == n-k+i){
		i--;
	}
	if(i>0){
		a[i] = a[i] +1;
		for(int j=i+1; j<=k; j++){
			a[j] = a[i]+j-i;
		}
	}else ok = true;
}

void solve(int n, int k, int a[]){
	memset(b,false,sizeof(b));
	ok = false;
	for(int i=1; i<=k; i++){
		cin>>a[i];
		b[a[i]] = true;
	}
	nextCombination(n,k,a);
	if(ok == true) cout<<k<<endl;
	else{
		int d= 0;
		for(int i=1;i<=k;i++){
			if(!b[a[i]])	d++;
		}
		cout<<d<<endl;
	}
}

int main(){
	int t; cin>>t;
	int n, k;
	while (t--) {
		cin>>n>>k;
		int a[50];
		solve(n,k,a);
	}
	return 0;
}
