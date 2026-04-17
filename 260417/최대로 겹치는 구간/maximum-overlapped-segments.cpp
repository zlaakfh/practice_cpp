#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int offset = 100;
    int arr[201] = {0};
    int x1, x2;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        for (int j = x1; j < x2; j++) {
            arr[j + offset] += 1;
        }
    }

    int ans = 0;
    for (int i = 0; i <= 200; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }

    cout << ans;

    return 0;
}