//23.5.25
//rafy
//strig travers
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int c=0;c<s.size();c++){
        if(s[c]=='W' && s[c+1]=='U' && s[c+2]=='B'){
            c+=2;
            cout<<" ";
            s.pop_back();
        }
        else{
            cout<<s[c];
        }
    }
}