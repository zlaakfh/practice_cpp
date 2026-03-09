#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int n1[a], n2[b];

    for (int i = 0; i < a; i++) {
        cin >> n1[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> n2[i];
    }

    bool found = false;

    for (int i = 0; i <= a - b; i++) {
        bool same = true;
        for (int j = 0; j < b; j++) {
            if (n1[i + j] != n2[j]) {
                same = false;
                break;
            }
        }
        if (same) {
            found = true;
            break;
        }
    }

    if (found) cout << "Yes";
    else cout << "No";
    
    return 0;
}