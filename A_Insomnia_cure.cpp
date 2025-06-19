//19.6.2025
//rafy
//math
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,r;
    int count=0;
    cin>>k>>l>>m>>n>>r;
    for(int i=1;i<=r;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            count++;
        }
    }
    cout<<count;
}