#include<bits/stdc++.h>
using namespace std;

void result(string s){
	stack<char> st;
	for(int i=0; i<s.length(); i++){
		if(!st.empty() && s[i]==')' && st.top()=='(')	st.pop();
		else st.push(s[i]);
	}
	int count = 0, left = 0, right = 0;
	while(!st.empty()){
		if(st.top() == '(') left++;
		else right++;
		st.pop();
	}
	count = left/2 + right/2 +left%2 + right%2;
	cout<<count<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		result(s);
	}
	return 0;
}
