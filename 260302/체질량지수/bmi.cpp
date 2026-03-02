#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h, w;
    cin >> h >> w;
    double b;

    b = (10000 * w) / (h * h);
    b = (int)b;

    if (b >= 25) {
        cout << b << "\n";
        cout << "Obesity";
    }
    else {
        cout << b;
    }
    return 0;
}