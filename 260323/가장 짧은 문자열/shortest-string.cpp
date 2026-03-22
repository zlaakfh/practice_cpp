#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int la = a.length();
    int lb = b.length();
    int lc = c.length();

    int maxlen = max({la, lb, lc});
    int minlen = min({la, lb, lc});

    cout << maxlen - minlen;

    return 0;
}