
#include <bits/stdc++.h>
using namespace std;

void result(string s){
    stack<string> st;
    string str = "";
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' '){
            st.push(str);
            str = "";
        }
        else	str += s[i];
    }
    
    st.push(str);
 
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
 
// Driver Code
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
		string s; getline(cin,s);
		result(s);
		cout<<endl;
	}
    return 0;
}
