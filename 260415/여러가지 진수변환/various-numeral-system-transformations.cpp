#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int arr[20] = {};

    int cnt = 0;

    while (true) {
        if (n < b) {
            arr[cnt++] = n;
            break;
        }

        arr[cnt++] = n % b;
        n /= b;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i];
    }

    return 0;
}