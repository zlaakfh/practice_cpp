#include <iostream>
using namespace std;

bool inRange(int x, int y) {
    return 0 <= x && x < 19 && 0 <= y && y < 19;
}

int main() {
    int arr[19][19] = {};
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            cin >> arr[i][j];
        }
    }

    int dx[4] = {0, 1, 1, 1};
    int dy[4] = {1, 0, -1, 1};

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            
            if (arr[i][j] == 0) continue;

            int color = arr[i][j];

            for (int dir = 0; dir < 4; dir++) {
                int cnt = 1;

                for (int k = 1; k < 5; k++) {
                    int nx = i + dx[dir] * k;
                    int ny = j + dy[dir] * k;

                    if (!inRange(nx, ny)) break;

                    if (color == arr[nx][ny]) { 
                        cnt++;
                    }
                    else {
                        break;
                    }
                }

                if (cnt == 5) {
                    cout << color << endl;;

                    int midx = i + dx[dir] * 2;
                    int midy = j + dy[dir] * 2;

                    cout << midx + 1 << " " << midy + 1;
                    return 0;
                }
            }

        }
    }

    cout << 0;
    return 0;
}