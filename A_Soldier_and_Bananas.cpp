//31.5.25
//rafy
//Normal math
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,w;
    long long n1,n2;
    cin>>k>>n1>>w;
    long long sum=0;
    for(int i=1;i<=w;i++){
        n2=i*k;
        sum+=n2;
    }
    if(sum<=n1){
        cout<<0;
    }
    else{
    cout<<abs(sum-n1);
    }
}