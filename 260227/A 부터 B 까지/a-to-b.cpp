#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int n = a;

    while (true) {
        if (n <= b) {
            cout << n << " ";
            if (n % 2 == 0) {
                n += 3;
            }
            else {
                n *= 2;
            }
        }
        else {
            break;
        }
    }

    return 0;
}