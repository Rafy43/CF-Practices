//5.7.2025
//rafy
//array element swap and min and max position 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    int max_val=*max_element(v.begin(),v.end());
    int maxpos=find(v.begin(),v.end(),max_val)-v.begin();

    int min_val=*min_element(v.begin(),v.end());
    int minpos=find(v.rbegin(),v.rend(),min_val)-v.rbegin();
    minpos=t-1-minpos;

    int count=maxpos+(t-1-minpos);
    if(maxpos>minpos){
        count--;
    }
    cout<<count<<endl;
}