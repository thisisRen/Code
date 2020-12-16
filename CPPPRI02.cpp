#include <bits/stdc++.h>
using namespace std;
int snt (long long n){
	if(n<=1) return 0;
	else{
		for(long long i=2; i<=sqrt(n); i++){
			if(n%i==0)return 0;
		}
		return 1;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin>>n;
		if(snt(n)==1) cout<<n<< endl;
		else{
		    int Max=0;
			for(long long i=2; i<=sqrt(n); i++){
				if(snt(i)==1){
				    if(i> Max) Max=i;
					while(n%i==0){
						n/=i;
					}
				}
			}
			if(n>1 && n>Max)  Max=n;
			cout <<Max<< endl;
		}
		
	}
}
