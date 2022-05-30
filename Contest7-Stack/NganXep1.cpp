#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	vector<int> st;
	int n;
	while(cin>>s){
		if(s=="push"){
			cin>>n;
			st.push_back(n);
		}
		if(s=="pop"){
			if(st.empty())	cout<<"empty"<<endl;
			else st.pop_back();
		}
		if(s=="show"){
			if(st.empty())	cout<<"empty";
			else{
				for(int i=0; i<st.size(); i++){
					cout<<st[i]<<" ";		
				}
			}
			cout<<endl;
		}
	}
}
