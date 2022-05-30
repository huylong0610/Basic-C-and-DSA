#include<bits/stdc++.h>
using namespace std;

void nextCombi(string a){
	int n = a.length();
	int i = n-1;
	while(i>0 && a[i]>=a[i+1]){
		i--;
	}
	if(i>0){
		int k = n-1;
		while(a[i]>=a[k]){
			k--;
		}
		swap(a[i], a[k]);
		
		int l = i+1, r = n-1;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
		for(int i=0; i<=n-1; i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	else{
		cout<<"BIGGEST"<<endl;
	}

}

int main(){
	int t; cin>>t;
	for(int i=1; i<=t; i++){
		int k; cin>>k;
		string s; cin>>s;
		cout<<i<<" ";
		nextCombi(s);
	}
	return 0;
}
