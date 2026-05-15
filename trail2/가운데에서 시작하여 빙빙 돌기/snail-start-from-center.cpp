#include <iostream>
using namespace std;

int n;
int arr[100][100];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

int main() {
    cin >> n;
    int x = n / 2;
    int y = n / 2;
    int dir = 0;

    int num = 1;
    arr[x][y] = num++;
    int len = 1;
    
    while (num <= n * n) {
        for (int repeat = 0; repeat < 2; repeat++) {
            for (int i = 0; i < len; i++) {
                x += dx[dir];
                y += dy[dir];
                arr[x][y] = num++;

                if (num > n * n) break;
            }
            dir = (dir + 1) % 4;
            if (num > n * n) break;
        }
        len++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}