//21.5.25
//rafy
//string and map
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int sum=0;
    map<string,int> ww={
        {"Icosahedron",20},{"Cube",6},{"Tetrahedron",4},{"Dodecahedron",12},{"Octahedron",8}
    };
    while(n--){
        string s;cin>>s;
        sum+=ww[s];
    }
    cout<<sum<<endl;

}
