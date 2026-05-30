#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[20][20];

int getSum(int x, int y) {
    return arr[x][y] + arr[x][y + 1] + arr[x][y + 2];
}

bool overlap(int x1, int y1, int x2, int y2) {
    if (x1 != x2) return false;

    for (int a = y1; a <= y1 + 2; a++) {
        for (int b = y2; b <= y2 + 2; b++) {
            if (a == b) return true;
        }
    }

    return false;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int answer = 0;

    for (int x1 = 0; x1 < n; x1++) {
        for (int y1 = 0; y1 <= n - 3; y1++) {
            
            for (int x2 = 0; x2 < n; x2++) {
                for (int y2 = 0; y2 <= n - 3; y2++) {
                    if (overlap(x1, y1, x2, y2)) continue;

                    int sum = getSum(x1, y1) + getSum(x2, y2);
                    answer = max(answer, sum);
                }
            }
        }
    }

    cout << answer;

    return 0;
}