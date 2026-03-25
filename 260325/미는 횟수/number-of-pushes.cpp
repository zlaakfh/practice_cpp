#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a;
    cin >> b;

    int n = 0;
    bool same = false;
    for (int i = 0; i < a.length(); i++) {
        if (a == b) {
            same = true;
            break;
        }
        char back = a.back();
        a.pop_back();
        a = back + a;
        n++;
    }

    if (!same) cout << -1;
    else cout << n;
    return 0;
}