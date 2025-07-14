//14.7.2025
//rafy
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<pair<int, int>> v(t);
    for (int i = 0; i < t; i++) {
        cin >> v[i].first >> v[i].second;
    }
    int current = 0, max_capacity = 0;

    for (int i = 0; i < t; i++) {
        current -= v[i].first; 
        current += v[i].second; 
        max_capacity = max(max_capacity, current);
    }
    cout << max_capacity << endl;
    return 0;
}
