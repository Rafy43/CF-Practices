//23.5.25
//rafy
//string sorting and matching
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string s3,s4;
    s3=s1+s2;
    cin>>s4;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if(s3==s4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}