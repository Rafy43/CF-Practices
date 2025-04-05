//05.04.2025
//rafy
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()>=2 && s.substr(s.size()-2 )== "us"){
            s.replace(s.size()-2,2,"i");
        }
        cout<<s<<endl;
    }
}
