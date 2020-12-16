#include <bits/stdc++.h>
using namespace std;
long long csc (int n){
	if(n==1) return 1;
	else return n+csc(n-1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >>n>>k;
		if(csc(n)==k) cout <<"1"<< endl;
		else cout <<"0"<< endl;
	}
}
