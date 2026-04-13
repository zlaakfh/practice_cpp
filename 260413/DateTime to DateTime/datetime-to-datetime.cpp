#include <iostream>
using namespace std;

int main() {
    int d1 = 11;
    int h1 = 11;
    int m1 = 11;

    int d2, h2, m2;
    cin >> d2 >> h2 >> m2;

    int start = d1 * 24 * 60 + h1 * 60 + m1;
    int end = d2 * 24 * 60 + h2 * 60 + m2;

    if (end < start) cout << -1;
    else cout << end - start;
    return 0;
}