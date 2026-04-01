#include <iostream>
using namespace std;

int calculate(int *arr, int m) {
    int total = 0;
    while (true) {
        total += arr[m-1];
        if (m < 1) break;
        if (m % 2 == 1) m -= 1;
        else m /= 2;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << calculate(arr, m);
    return 0;
}