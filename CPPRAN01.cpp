#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n>>k;
		int a[n+1];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		while(k--){
			int l,r;
			cin >> l>>r;
			int sum=0;
			for(int i=l-1; i<=r-1; i++){
				sum+=a[i];
			}
			cout << sum<< endl;
		}
		
	}
}
