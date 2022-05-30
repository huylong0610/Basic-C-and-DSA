#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int a[MAX]; bool ok = true;

void result(int n){
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
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

bool check(int n){
	int i = 1, j = n;
	while(i<j){
		if(a[i] != a[j]){
			return false;
			break;
		}
		else{
			i++; j--;
		}
	}
	return true;
}

int main(){
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		a[i] = 0;
	}
	ok = true;
	while(ok){
		if(check(n)){
			result(n);	
		}
		nextBit(n);
	}
	return 0;
}
