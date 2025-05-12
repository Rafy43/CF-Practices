//12.5.2025
//rafy
//basic math
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int sum=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double f=double(sum)/n;
    cout<<fixed<<setprecision(12)<<f;
}