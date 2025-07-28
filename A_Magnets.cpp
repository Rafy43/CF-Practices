//28.7.25
//rafy
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string prev, curr;
    cin >> prev;  // Read first magnet
    int count = 1; // First magnet starts first group

    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr != prev) {
            count++; // New group
            prev = curr;
        }
    }

    cout << count << endl;
    return 0;
}
