#include<bits/stdc++.h>
using namespace std;

void bitogray(string s){
	string x="";
	x=x+s[0];
	for (int i=1;i<s.length();i++){
		if (s[i]!=s[i-1]) x=x+'1';
		else x=x+'0';
	}
	cout<<x<<endl;
}

int main(){
	int t;	cin>>t;
	while(t--){
		string s; cin>>s;
		bitogray(s);
	}
	return 0;
}
