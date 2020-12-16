#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin >>n>>k;
		long a[k+1][n+1] ;
		int l=n*k;
		long b[l+1];
		long h=0;
		for(int i=0;i<k; i++){
			for(int j=0; j<n; j++){
				cin>>a[i][j];
				b[h]=a[i][j];
				h++;
			}
		}
		sort(b,b+h);
		for(int i=0;i<h; i++){
			cout <<b[i]<<" ";
		}
		cout << endl;
	}
}
