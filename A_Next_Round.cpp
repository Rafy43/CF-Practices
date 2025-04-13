//13.04.2025
//rafy
//basic
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i;
    int count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
}