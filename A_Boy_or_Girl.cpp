//24.4.2025
//rafy
//string count--->avoid duplicate charecter
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    unordered_set<char>seen;
    for(char c:s){
        seen.insert(c);
    }
    if(seen.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}