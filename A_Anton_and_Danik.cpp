//13.05.2025
//rafy
//string count
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt1=0,cnt2=0;
    cin>>n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];        
    }
    for(char c:s){
        if(c=='A'){
            cnt1++;
        }
        else if(c=='D'){
            cnt2++;
        }
    }
    if(cnt1>cnt2){
        cout<<"Anton"<<endl;
    }
    else if(cnt1<cnt2){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}