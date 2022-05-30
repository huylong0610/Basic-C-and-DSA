#include<bits/stdc++.h>
using namespace std;

void result(string s){
	stack<int> st;
	for(int i=s.length()-1; i>=0; i--){
		if(s[i] == '+' || s[i]=='-' || s[i] == '*' || s[i]=='/' || s[i] == '^'){
			int a = st.top(); st.pop();
			int b = st.top(); st.pop();
			
			int tmp;
			if(s[i] == '+')	tmp = a+b;
			if(s[i] == '-') tmp = a-b;
			if(s[i] == '*') tmp = a*b;
			if(s[i] == '/') tmp = a/b;
			if(s[i] == '^'){
				for(int j=0; j<b-1; j++){
					tmp*=a;
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
