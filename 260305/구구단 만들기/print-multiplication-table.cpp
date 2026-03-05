#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    for (int i = 1; i < 10; i++) {
        for (int j = b; j >= a; j--) {
            if (j % 2 == 0) {
                cout << j << " * " << i << " = " << j*i;
                if (j > 2) {
                    cout << " / ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}