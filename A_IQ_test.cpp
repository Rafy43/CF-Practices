//20.6.2025
//rafy
//implement
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,co=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            co++;
        }
    }
    for(int i=0;i<n;i++){
        if((count==1 && arr[i]%2==0) || (co==1 && arr[i]%2!=0)){
            cout<<i+1<<endl;
            break;
        }
    }
}