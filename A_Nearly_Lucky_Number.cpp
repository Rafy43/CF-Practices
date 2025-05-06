//6.5.2025
//rafy
//number travers
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int dgcount=0;
   for(char c:s){
    if(c=='4'||c=='7'){
        dgcount++;
    }
   }
   if(dgcount==4||dgcount==7){
    cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
}