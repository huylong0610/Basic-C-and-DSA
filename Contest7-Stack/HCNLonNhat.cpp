#include<bits/stdc++.h>
using namespace std;

long long int result(int n, long long int h[]){
    stack<int> s;
 
    long long int max = 0;
    long long tp;
    long long int top;
 
    int i = 0;
    while(i < n){
        if (s.empty() || h[s.top()] <= h[i]){
            s.push(i);
            i++;
        }		
        else{
            tp = s.top();
            s.pop();
			if(s.empty()){
				top = h[tp] * i;
			}
           	else top = h[tp] * (i - s.top() - 1);

            if (max < top)
                max = top;
        }
    }

    while(!s.empty()){
        tp = s.top();
        s.pop();
		if(s.empty()){
			top = h[tp] * i;
		}
        else top = h[tp] * (i - s.top() - 1);

        if (max < top)
            max = top;
    }
 
    return max;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long int h[100000];
		for(int i=0; i<n; i++){
			cin>>h[i];
		}
		cout<<result(n,h)<<endl;
	}
	return 0;
}
