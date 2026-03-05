#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {
                arr[j][i] = cnt;
                cnt += 1;
            }
            else {
                arr[n - j - 1][i] = cnt;
                cnt += 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}