//11.5.2024
//rafy
//adjacent duplicate removed from a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;
    cin>>s;
    int remove=0;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            remove++;
        }
    }
    cout<<remove;
}