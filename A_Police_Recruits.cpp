//8.7.2025
//rafy
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int available = 0; 
    int untreated = 0;  

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;

        if (event == -1) {
            if (available > 0) {
                available--; 
            } else {
                untreated++; 
            }
        } else {
            available += event; 
        }
    }

    cout << untreated << endl;

    return 0;
}
