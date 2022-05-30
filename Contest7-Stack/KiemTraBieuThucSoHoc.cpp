#include<bits/stdc++.h>
using namespace std;

void result(string s){
	stack <char> st;
	bool ok;
	for (int i=0;i<s.length();i++){
		if (s[i]==')'){
			ok=true;
			while (!st.empty() && st.top()!='('){
				if (st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/') ok=false;
				st.pop();
			}
			if (ok) break;
		}
		else st.push(s[i]);
	}
	if (ok) cout<<"Yes"<<"\n";
	else cout<<"No"<<"\n";
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		result(s);
	}
	return 0;
}
