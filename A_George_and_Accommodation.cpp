//27.6.2025
//rafy
//normal problem counting room
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    bool t=false;
    while(n--){
        int a,b;
        cin>>a>>b;
        // if(b>a){
        //     c++;
        //     t=true;
        // }
        if(abs(a-b)>=2){
            c++;
            t=true;
        }
    }
    if(true){
        cout<<c<<endl;
    }
    else{
        cout<<0<<endl;
    }
}