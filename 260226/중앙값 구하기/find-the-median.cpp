#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    if ((a > b) && (a < c)) {
        cout << a;
    }
    else if ((a > c) && (a < b)) {
        cout << a;
    }
    else if ((a < b) && (b < c)) {
        cout << b;
    }
    else if ((c < b) && (b < a)) {
        cout << b;
    }
    else if ((c > a) && (c < b)) {
        cout << c;
    }
    else {
        cout << c;
    }
    return 0;
}