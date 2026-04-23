#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    int arr[2001][2001] = {0};
    int offset = 1000;

    for (int i = x1; i < x2; i++) {
        for (int j = y1; j < y2; j++) {
            arr[i + offset][j + offset] = 1;
        }
    }

    for (int i = x3; i < x4; i++) {
        for (int j = y3; j < y4; j++) {
            arr[i + offset][j + offset] = 2;
        }
    }

    int minx = 2001, miny = 2001;
    int maxx = -1, maxy = -1;

    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (arr[i][j] == 1) {
                if (i < minx) minx = i;
                if (i > maxx) maxx = i;
                if (j < miny) miny = j;
                if (j > maxy) maxy = j;
            }
        }
    }

    if (maxx == -1) {
        cout << 0;
    }
    else {
        cout << (maxx - minx + 1) * (maxy - miny + 1);
    }

    return 0;
}