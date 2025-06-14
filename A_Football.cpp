//14.6.2025
//rafy
//string operation

#include <bits/stdc++.h>
using namespace std;

bool isDangerous(string s) {
    int cnt = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            cnt++;
            if (cnt >= 7) return true;
        } else {
            cnt = 1;
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    if (isDangerous(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
