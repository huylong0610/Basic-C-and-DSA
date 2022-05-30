#include<bits/stdc++.h>
using namespace std;

int priority(char c){
	if(c == '^')	return 5;
	else if(c == '*' || c == '/')	return 4;
	else if(c == '+' || c == '-')	return 3;
	else return 2;
}

void result(string s){
	stack<char> st;
	string res = "";
	
	for(int i=0; i<s.length();i++){
		if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')	res+=s[i];
		else if(s[i] == '(')	st.push(s[i]);
		else if(s[i] == ')'){
			while(!st.empty() && st.top()!='('){
				res+=st.top();
				st.pop();
			}
			st.pop();
		}
		else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
			while(!st.empty() && priority(st.top())>=priority(s[i])){
				res+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	
	while(!st.empty()){
		if(st.top() != '('){
			res+=st.top();
		}
		st.pop();
	}
	cout<<res<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		result(s);
	}
	return 0;
}
