//15.7.2025
//rafy
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n+5];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++){
            if(arr[i]!=arr[i+1]){
                cout<<i+1<<endl;
            }
        }
    }
}
