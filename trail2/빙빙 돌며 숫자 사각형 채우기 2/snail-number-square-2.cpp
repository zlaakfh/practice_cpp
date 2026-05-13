#include <iostream>
using namespace std;

int n, m;

bool inRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    cin >> n >> m;
    int arr[n][m] = {};
    
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    int x = 0, y = 0;
    int dir = 0;

    for (int num = 1; num <= n * m; num++) {
        arr[x][y] = num;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!inRange(nx, ny) || arr[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }

        x += dx[dir];
        y += dy[dir];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}