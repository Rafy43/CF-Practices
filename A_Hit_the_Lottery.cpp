//28.5.25
//rafy
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;cin>>n;
    vector<int> v{100,20,10,5,1};
    int count=0;
    for(int i=0;i<v.size();i++){
       count+=n/v[i];
       n%=v[i];
    }
    cout<<count<<endl;
}