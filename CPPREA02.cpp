#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >>n;
		long long  a[n+1];
		for(int i=0;i<n; i++){
			cin>>a[i];
		}
		long long  b[n+1];
		int h=0;
		for(int i=0;i<n; i++){
			if(a[i] != 0){
				b[h]=a[i];
				h++;
			}
		}
		for(int i=0;i<n; i++){
			if(a[i] == 0){
				b[h]=a[i];
				h++;
			}
		}
		for(int i=0; i<n;i++){
			cout <<b[i]<<" ";
		}
		cout<<endl;
	}
}
