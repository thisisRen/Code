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
	int h;
	for(int i= s.size()-1; i>=0; i--){
		if(s[i]==' '){
			h=i;
			for(int j=i+1; j<s.size(); j++){
				s[j]-= 'a'-'A';
			}
			break;
		}
	}
	s[0] -= 'a'-'A';
	for(int i=1; i< h; i++){
		if(s[i]==' '){
			s[i+1] -= 'a'-'A';
		}
	}
	string s1;
	for(int i=0; i <h; i++){
		s1+= s[i];
	}
	s1+=",";
	for(int i=h; i<s.size(); i++){
		s1+= s[i];
	}
	cout <<s1;
}
