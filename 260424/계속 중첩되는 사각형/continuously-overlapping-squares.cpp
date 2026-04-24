#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[201][201] = {0};
    int offset = 100;

    for (int i = 1; i <= n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        int color;
        if (i % 2 == 1) color = 1;
        else color = 2;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                arr[x + offset][y + offset] = color;
            }
        }
    }

    int area = 0;
    for (int x = 0; x < 201; x++) {
        for (int y = 0; y < 201; y++) {
            if (arr[x][y] == 2) area++;
        }
    }

    cout << area;
    return 0;
}