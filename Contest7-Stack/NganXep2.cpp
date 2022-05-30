#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n; cin>>t;
	string s;
	stack<int> st;
	while(t--){
		cin>>s;
		if(s == "PUSH"){
			cin>>n;
			st.push(n);
		}
		if(s == "POP"){
			if(st.empty())	continue;
			else{
				st.pop();
			}
		}
		if(s == "PRINT"){
			if(st.empty())	cout<<"NONE"<<endl;
			else{
				int t = st.top();
				cout<<t<<endl;
			}
		}
	} 
}
