#include <bits/stdc++.h>
using namespace std;
int chuyen(char a){
	int t=a-'0';
	return t;
}
void snv (string s1,string s2){
    string s3="";
    long long length=s1.size();
    long long nho=0;
    for(long long i=length-1;i>=0;i--){
        if( chuyen(s1[i] ) + chuyen(s2[i] ) +nho >= 10 ){
            s3=(char) (chuyen(s1[i] ) + chuyen(s2[i] ) +nho -10 +'0' ) +s3;
            nho=1;
        }
        else{
            s3=(char) (chuyen(s1[i] ) + chuyen(s2[i] ) +nho +'0') +s3;
            nho=0;
        }
    }
    if(nho != 0){
    	string s4;
    	s4+= nho +'0';
    	s4+=s3;
    	cout << s4;
	}
    else cout<<s3;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        while(s1.size()<s2.size()) s1="0"+s1;
        while(s1.size()>s2.size()) s2="0"+s2;
        snv(s1,s2);
        cout <<endl;
    }
}
