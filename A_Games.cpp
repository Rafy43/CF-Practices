#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int c[30][2];
for(int i=0;i<n;i++){
    cin>>c[i][0]>>c[i][1];
 }
 int count=0;
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i!=j && c[i][1]==c[j][0]){
            count++;
        }
    }
 }
 cout<<count;
}