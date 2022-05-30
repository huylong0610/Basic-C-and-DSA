#include<bits/stdc++.h>
using namespace std;

void result(string s){
 	
    stack<int> stk;
    for (int i = 0; i <= s.length(); i++){
        stk.push(i+1);
        
        if (i == s.length() || s[i] == 'I'){
            while (!stk.empty()){
				cout<<stk.top();
				stk.pop();
            }
        }
    }
    cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		result(s);
	}
	return 0;
}
