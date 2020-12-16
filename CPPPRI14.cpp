#include <iostream>
#include <string>
using namespace std;

	void sang(){
		long long i,j,n, t=0;
		cin >> n;
		int a[n];
		for( i = 2; i <= n; i++){
			a[i] =1;
		}

		for( i = 2; i <= n; i++){
			if(a[i] == 1){
				for( j = i*i; j <= n; j+=i){
					a[j] =0;
				}
			}
		}
		for( i =2; i <=n; i++){
			if( a[i] == 1){
				t = i*i;
				if( t <= n){
					cout << t << ' ';
				}
			}
		}
	}
	int main(){
		int T,i;
		cin >> T;
		for( i=0; i<T; i++){
			sang();
			cout << endl;
		}
	}
