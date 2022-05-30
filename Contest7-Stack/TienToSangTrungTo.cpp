#include<bits/stdc++.h>
using namespace std;

void result(string s){
	stack<string> st;
	
	for(int i=s.length()-1; i>=0; i--){
		if(s[i] == '+' || s[i]=='-' || s[i] == '*' || s[i]=='/' || s[i] == '^'){
			string s1 = st.top(); st.pop();
			string s2 = st.top(); st.pop();
			string tmp = "(" + s1 + s[i] + s2 + ")";
			st.push(tmp);
		}
		else st.push(string(1,s[i]));
	}
	
	cout<<st.top()<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		result(s);
	}
	return 0;
}
