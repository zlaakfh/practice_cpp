#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n] = {0,};
    int a, b;
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        for (int j = a-1; j <= b-1; j++) {
            arr[j] += 1;
        }
    }

    int maxval = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxval) {
            maxval = arr[i];
        }
    }
    cout << maxval;
    return 0;
}