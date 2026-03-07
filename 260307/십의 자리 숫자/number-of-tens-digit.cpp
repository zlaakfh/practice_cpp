#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10] = {0,};
    int n;

    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        else if (n >= 10) {
            n /= 10;
            arr[n] += 1;
        }
        else {
            continue;
        }
    }

    for (int i = 1; i < 10; i++) {
        cout << i << " - " << arr[i] << endl;
    }
    return 0;
}