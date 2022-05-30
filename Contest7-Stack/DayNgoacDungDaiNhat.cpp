#include<bits/stdc++.h>
using namespace std;

void result(string s){
	stack <int> a;
	a.push(-1);
	int d=0;
	for (int i=0; i<s.length(); i++){
		if (s[i]=='(') a.push(i);
		else{
			if (s[i]==')'){
				a.pop();
				if (!a.empty()) d=max(d,i-a.top());
				else a.push(i);
			}
		}
	}
	cout<<d<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		result(s);
	}
}
