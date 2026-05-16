#include <iostream>
#include <string>
using namespace std;

int n, t;
int arr[100][100] = {};

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool inRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    cin >> n >> t;
    string cmd;
    cin >> cmd;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int x = n / 2, y = n / 2;
    int dir = 0;

    int sum = arr[x][y];

    for (int i = 0; i < t; i++) {
        char c = cmd[i];

        if (c == 'R') {
            dir = (dir + 1) % 4;
        }
        else if (c == 'L') {
            dir = (dir + 3) % 4;
        }

        else if (c == 'F') {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (inRange(nx, ny)) {
                x = nx;
                y = ny;
                sum += arr[x][y];
            }
        }
    }

    cout << sum;
    
    return 0;
}