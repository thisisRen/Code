#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	string s,s2;
	getline(cin,s);
	getline(cin,s2);
	stringstream ss(s);
    string token="";

    while ( ss >> token) {
        if(token != s2){
        	cout << token<<' ';
		}
    }
}
