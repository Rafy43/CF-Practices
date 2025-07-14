//14.7.2025
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int r1=k*l;
    int r2=r1/nl;
    int r3=c*d;
    int r4=p/np;
    int ans=min({r2,r3,r4})/n;
    cout<<ans<<endl;
}