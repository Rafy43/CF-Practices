//4.05.2025
//rafy
//basic logical calculation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    int sum=0;
    cin>>n>>h;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>h){
            sum+=2;
        }
        else{
            sum+=1;
        }
    }
    cout<<sum<<endl;
}