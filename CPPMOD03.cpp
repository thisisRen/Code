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
		if(n< k) cout << csc(n)<< endl;
		else if(n==k) cout << csc(n)+1<< endl;
		else{
			long long sum=0;
			for(int i=1; i<=n; i++){
				sum+= i%k;
			}
			cout << sum << endl;
		}
	}
}
