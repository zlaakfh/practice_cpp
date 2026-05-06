#include <iostream>
using namespace std;

int n;

bool inRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n) ;
}

int main() {
    cin >> n;
    
    int arr[n][n] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int answer = 0;

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            int cnt = 0;
    
            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (inRange(nx, ny) && arr[nx][ny] == 1) {
                    cnt++;
                }
            }
            if (cnt >= 3) {
                answer++;
            }
        }
    }

    cout << answer;
    return 0;
}