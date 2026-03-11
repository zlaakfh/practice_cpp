#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n][n] = {};
    int num = 1;

    if (n % 2 == 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0) {
                    arr[n - j - 1][n - i - 1] = num;
                    num++;
                }
                else {
                    arr[j][n - i - 1] = num;
                    num++;
                }
            }   
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0) {
                    arr[n - j - 1][n - i - 1] = num;
                    num++;
                }
                else {
                    arr[j][n - i - 1] = num;
                    num++;
                }
            }   
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}