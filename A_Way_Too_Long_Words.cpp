//08.04.2025
//rafy
//frequency string
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()>10){
            cout<<s[0]<<s.length()-2<<s.back()<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}