#include<bits/stdc++.h>
using namespace std;

void result(string s){
	stack<int> st;
	for(int i=0; i<s.length(); i++){
		if(s[i] == '+' || s[i]=='-' || s[i] == '*' || s[i]=='/' || s[i] == '^'){
			int a = st.top(); st.pop();
			int b = st.top(); st.pop();
			
			int tmp;
			if(s[i] == '+')	tmp = b+a;
			if(s[i] == '-') tmp = b-a;
			if(s[i] == '*') tmp = b*a;
			if(s[i] == '/') tmp = b/a;
			if(s[i] == '^'){
				for(int j=0; j<a-1; j++){
					tmp*=b;
				}
			}
			st.push(tmp);
		}
		else	st.push((int)(s[i] - '0'));
	}
	cout<<st.top()<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		result(s);
	}
}
