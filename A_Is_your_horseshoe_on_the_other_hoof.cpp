#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
}