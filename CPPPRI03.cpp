#include <bits/stdc++.h>
#include <string>
using namespace std;
void sangnt(int n){
	int a[100001];
	for(int i=2; i<=n; i++){
		a[i]=0;
	}
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			for(int j=2*i; j<=n; j+=i){
				a[j]=1;
			}
		}
	}
	for(int i=2; i<=n; i++){
		if(a[i]==0) cout <<i<<" ";
	}
	cout << endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		sangnt(n);
	}
}
