//29.5.25
//rafy
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long rem=a%b;
        long long moves=(b-rem)%b;
        cout<<moves<<endl;

    }
}