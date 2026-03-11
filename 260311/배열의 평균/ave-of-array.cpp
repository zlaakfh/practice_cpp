#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2][4];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 2; i++) {
        double row_avg = 0.0;
        for (int j = 0; j < 4; j++) {
            row_avg += arr[i][j];
        }
        row_avg /= 4;
        cout << row_avg << " ";
    }
    cout << endl;
    
    for (int j = 0; j < 4; j++) {
        double col_avg = 0.0;
        for (int i = 0; i < 2; i++) {
            col_avg += arr[i][j];
        }
        col_avg /= 2;
        cout << col_avg << " ";
    }
    cout << endl;

    double avg = 0.0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            avg += arr[i][j];
        }
    }
    avg /= 8;
    cout << avg;
    return 0;
}