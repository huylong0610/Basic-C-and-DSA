#include<bits/stdc++.h>
using namespace std;
int a[100]; bool ok = true;
int n, k;

void result(){
	for(int i=1; i<=k; i++){
		if(i==1)	cout<< "(";
		cout<<a[i];
		if(i<k)		cout<<" ";
		else cout<<")";
	}
	cout<<" ";
}

void phantich(){
	int i = k;
	while(i>0 && a[i]==1){
		i--;
	}
	if(i>0){
		a[i] -= 1;
		int d = k-i+1;
		k = i;
		for(int j=i+1; j<=i+d/a[i]; j++){
			a[j] = a[i];
		}
		k += d/a[i];
		if(d%a[i]){
			a[++k] = d%a[i];
		}
	}
	else ok = false;
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		k = 1; a[k] = n;
		ok = true;
		while(ok){
			result();
			phantich();
		}
		cout<<endl;
	}
	return 0;
}
