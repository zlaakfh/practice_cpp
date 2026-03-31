#include <iostream>
#include <string>
using namespace std;

int IsSubArray(string a, string b) {
    for (int i = 0; i <= a.length() - b.length(); i++) {
        bool match = true;
        for (int j = 0; j < b.length(); j++) {
            if (a[i + j] != b[j]) {
                match = false;
                break;
            }
        }
        if (match) return i;
    }
    return -1;
}

int main() {
    string n, m;
    cin >> n;
    cin >> m;

    cout << IsSubArray(n, m);

    return 0;
}