#include <bits/stdc++.h>
#include <string>
using namespace std;
void in(){
	int a,m;
	cin >> a >>m;
	int i, dem=0;
	for( i=0; i<m; i++){
		if( (i*a)%m ==1){
			cout <<i << endl;
			break;
		}
		else dem++;
	}
	if( dem==m) cout <<"-1" << endl;
}
int main(){
	int t,i;
	cin >> t;
	for( i=0; i<t; i++){
		in();
	}
}
