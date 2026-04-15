#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int result = 0;

    for (int i = 0; i < n.length(); i++) {
        result = result * 2 + (n[i] - '0');
    }

    result *= 17;
    int arr[20] = {};
    int cnt = 0;

    while (true) {
        if (result < 2) {
            arr[cnt++] = result;
            break;
        }
        arr[cnt++] = result % 2;
        result /= 2;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i];
    }

    return 0;
}