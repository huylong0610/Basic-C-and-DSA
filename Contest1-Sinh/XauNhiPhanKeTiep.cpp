#include<bits/stdc++.h>
using namespace std;

void nextBit(string x){
	int n = x.length()-1;
	while(n >=0 && x[n] != '0'){
		n--;
	}
	if(n<0){
		for(int i=0; i<x.length();i++){
			cout<<0;
		}
	}
	else{
		x[n] = '1';
		for(int i=n+1; i<x.length();i++){
			x[i] = '0';
		}	
		cout<<x<<endl;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		string x; cin>>x;
		nextBit(x);
	}
}
