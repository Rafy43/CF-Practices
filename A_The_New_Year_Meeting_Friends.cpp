//2.6.25
//rafy
//basic math
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sum=0;
    sum=(v[2]-v[0]);
    cout<<sum<<endl;
}