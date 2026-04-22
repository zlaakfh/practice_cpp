#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[201][201] = {0};
    int offset = 100;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int i = x; i < x + 8; i++) {
            for (int j = y; j < y + 8; j++) {
                arr[i + offset][j + offset] = 1;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < 201; i++) {
        for (int j = 0; j < 201; j++) {
            if (arr[i][j] == 1) area++;
        }
    }

    cout << area;
    return 0;
}