//19.6.2025
//rafy
//string count;
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    unordered_set<char> seen;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            seen.insert(s[i]);
        }
    }
    cout<<seen.size();
}