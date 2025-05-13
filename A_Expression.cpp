//14.05.2025
//rafy
//math
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=a+b*c;
    int e=a*(b+c);
    int f=a*b*c;
    int g=(a+b)*c;
    int h=a+b+c;
    int i=a*b+c;
    cout<<max({d,e,f,g})<<endl;
}