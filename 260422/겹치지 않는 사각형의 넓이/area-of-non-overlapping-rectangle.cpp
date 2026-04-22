#include <iostream>
using namespace std;

int main() {
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;
    int mx1, my1, mx2, my2;
    cin >> ax1 >> ay1 >> ax2 >> ay2;
    cin >> bx1 >> by1 >> bx2 >> by2;
    cin >> mx1 >> my1 >> mx2 >> my2;

    int arr[2001][2001] = {0};
    int offset = 1000;

    for (int i = ax1; i < ax2; i++) {
        for (int j = ay1; j < ay2; j++) {
            arr[i + offset][j + offset] = 1;
        }
    }
    for (int i = bx1; i < bx2; i++) {
        for (int j = by1; j < by2; j++) {
            arr[i + offset][j + offset] = 1;
        }
    }
    
    for (int i = mx1; i < mx2; i++) {
        for (int j = my1; j < my2; j++) {
            arr[i + offset][j + offset] = 2;
        }
    }

    int area = 0;
    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (arr[i][j] == 1) area++;
        }
    }

    cout << area;
    return 0;
}