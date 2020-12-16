#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0; i<s.size(); i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]+= 'a'-'A';
		}
	}
	string s1="";
	int h;
	for(int i= s.size()-1; i>=0; i--){
		if(s[i]==' '){
			h=i;
			for(int j=i+1; j<s.size(); j++){
				s1+= s[j];
			}
			break;
		}
	}
	s1+= s[0];
	for(int i=0; i< h; i++){
		if(s[i]==' '){
			s1+= s[i+1];
		}
	}
	s1+="@ptit.edu.vn";
	cout << s1;
}
