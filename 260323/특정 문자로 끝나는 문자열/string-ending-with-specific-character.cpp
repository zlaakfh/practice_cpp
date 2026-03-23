#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a[10];
    char b;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    cin >> b;
    bool found = false;

    for (int i = 0; i < 10; i++) {
        if (a[i][a[i].length() - 1] == b) {
            cout << a[i] << endl;
            found = true;
        }
    }
    if (!found) cout << "None" << endl;
    return 0;
}