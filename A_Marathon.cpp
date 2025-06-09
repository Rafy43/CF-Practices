//9.666.2
//rafy
//implement
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        vector<int> v(4);
        int count=0;
        for(int i=1;i<=4;i++){
            cin>>v[i];
        }
        for(int i=1;i<=v.size();i++){
            if(v[1]<v[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}