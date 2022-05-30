#include<bits/stdc++.h>
using namespace std;

bool solution(long long  n){
	long long check[9];
	for(long long i = 0; i<=9; i++){
		check[i] = 0;
	}
	long long tmp;
	while(n>0){
		tmp = n%10;
		check[tmp]++;
		n/=10;
	}
	
	for(long long i=0; i<=5; i++){
		if(check[i]>=2) return false;
	}
	
	for(long long i=6; i<=9; i++){
		if(check[i]>0) return false;
	}
	return true;
}

int main(){
	int t; cin>>t;
	while(t--){
		long long l, r; cin>>l>>r;
		long long dem = 0;
		for(long long i=l; i<=r; i++){
			if(solution(i)) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
