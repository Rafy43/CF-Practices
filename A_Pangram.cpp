//18.5.2025
//rafy
//string
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    bool all_upper=true,all_lower=true;
    for(char c:s){
        if(!isupper(c)){
            all_upper=false;
        }
        if(!islower(c)){
            all_lower=false;
        }
    }
    if(all_upper || all_lower){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}