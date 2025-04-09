//09.04.2025
//rafy
//basic math
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c;
    if(a%c==0){
        d=a/c;
    }
    else{
        d=(a/c)+1;
    }
    if(b%c==0){
        e=b/c;
    }
    else{
        e=(b/c)+1;
    }
    cout<<d*e<<endl;

}