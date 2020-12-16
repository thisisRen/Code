#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >>n;
		long long a[n+1];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		long long check;
		for(int i=0; i<n;i++){
			check=1;
			for(int j=0; j<n; j++){
				if(a[j]==i){
					cout << i<< " ";
					check=0;
					break;
				}
			}
			if(check==1) cout <<"-1 " ;
			
		}
		cout << endl;
	}
}
