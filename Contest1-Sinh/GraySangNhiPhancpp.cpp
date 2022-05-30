#include<bits/stdc++.h>
using namespace std;

void graytobi(string s){
	string x="";
	x=x+s[0];	
	for (int i=1;i<s.length();i++){
		if (s[i]=='1'){
			if (x[x.length()-1]=='0') x=x+'1';
			else x=x+'0';
		}
		else x=x+x[x.length()-1];
	}
	cout<<x<<endl;
}

int main(){
	int t;	cin>>t;
	while(t--){
		string s; cin>>s;
		graytobi(s);
	}
	return 0;
}
