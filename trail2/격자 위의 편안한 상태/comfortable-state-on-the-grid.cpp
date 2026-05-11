#include <iostream>
using namespace std;

int n, m;

bool inRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n >> m;
    int arr[n][n] = {};
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};


    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;

        r--;
        c--;
        arr[r][c] = 1;

        int cnt = 0;

        for (int d = 0; d < 4; d++) {
            int nr = r + dx[d];
            int nc = c + dy[d];

            if (inRange(nr, nc) && arr[nr][nc] == 1) {
                cnt++;
            }
        }

        if (cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }


    return 0;
}