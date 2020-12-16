#include <bits/stdc++.h>
using namespace std;
void in(){
		int n;
		cin >> n;
		long long a = 1;
		for(int j = 1; j <= n; j++){
			if(a % j != 0){
				long long tmp;
				long long p = a, l = j;
    			while(l != 0){
        			tmp = p % l;
        			p = l;
        			l = tmp;
    			}
    			a *= j / p;
			}
		}
		cout << a << endl;
	}

int main(){
	int t;
	cin >> t;
	while(t--){
		in();
	}
}
