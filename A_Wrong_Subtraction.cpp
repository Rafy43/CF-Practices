//3.5.2025
//rafy
//normal subtraction
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        if(n%10!=0){
          n=n-1; 
        }
        else{
            n=n/10;
        }
    }
    cout<<n<<endl;
}