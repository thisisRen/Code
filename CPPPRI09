#include <bits/stdc++.h>
#include <string>
using namespace std;
int snt(long long n){
	if(n<=1) return 0;
	else{
		for(long long i=2; i<= sqrt(n); i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=2; i<=n; i++){
			int dem=0;
			if(snt(i)==1 && n%i==0){
				while(n%i==0){
					dem++;
					n/=i;
				}
				cout << i<<" "<< dem<<" ";
				
			}
		}
		cout << endl;
	}
}
