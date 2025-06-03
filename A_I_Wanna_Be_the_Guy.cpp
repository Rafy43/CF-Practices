//3.6.25
//RAFY
//Implemantation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    set<int> passed;
    int p1;
    cin>>p1;
    for(int i=0;i<p1;i++){
        int x;
        cin>>x;
        passed.insert(x);
    }
    int p2;
    cin>>p2;
    for(int i=0;i<p2;i++){
        int x;cin>>x;
        passed.insert(x);
    }
    if(passed.size()==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}