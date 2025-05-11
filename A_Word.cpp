//11.5.2025
//rafy
//string uppercase and lowercase
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0,ct=0;
    for(char c:s){
        if(isupper(c)){
            count++;
        }
        else{
            ct++;
        }
    }
    if(count>ct){
        for(char &c:s){
            c=toupper(c);
        } 
    }
    else{
        for(char &c:s){
            c=tolower(c);
        }
    }
    cout<<s<<endl;
}