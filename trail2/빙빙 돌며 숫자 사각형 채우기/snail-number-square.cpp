#include <iostream>
using namespace std;

int n, m;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool inRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    cin >> n >> m;
    int arr[n][m] = {};

    int x = 0, y = 0;
    int dir = 0;

    for (int i = 1; i <= n*m; i++) {
        arr[x][y] = i;

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