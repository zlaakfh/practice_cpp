#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a, b, c;
    getline(cin, a);
    getline(cin, b);

    for (int i = 0; i < a.length(); i++) {
        if (a[i] != ' ') { // 
            cout << a[i];
        }
    }
    for (int i = 0; i < b.length(); i++) {
        if (b[i] != ' ') {
            cout << b[i];
        }
    }

    return 0;
}