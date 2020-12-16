#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+1];
		int Max=0;
		for(int i=0; i<n; i++){
			cin >>a[i];
			if(a[i]> Max) Max=a[i];
		}
		cout << Max<< endl;
	}
}
