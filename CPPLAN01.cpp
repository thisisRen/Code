#include <bits/stdc++.h>
using namespace std;
void count(string s1,string s2){
    string s3="";
    long long length=s1.size();
    long long nho=0;
    for(long long i=length-1;i>=0;i--){
        if(s1[i]>=s2[i]+nho){
            s3=(char)(s1[i]-(s2[i]+nho)+'0')+s3;
            nho=0;
        }
        else{
            s3=(char)(s1[i]+10-(s2[i]+nho)+'0')+s3;
            nho=1;
        }
    }
    cout<<s3;
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
        if(s1>=s2) count(s1,s2);
        else count(s2,s1);
        cout<<endl;
    }
}
