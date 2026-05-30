#include <iostream>
#include <string>
using namespace std;

int n, m;
char arr[50][50];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool inRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++) {
            arr[i][j] = s[j];    
        }
    }

    string target = "LEE";
    int answer = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            for (int dir = 0; dir < 8; dir++) {
                bool bingo = true;

                for (int k = 0; k < 3; k++) {
                    int nx = i + dx[dir] * k;
                    int ny = j + dy[dir] * k;

                    if (!inRange(nx, ny) || arr[nx][ny] != target[k]) {
                        bingo = false;
                        break;
                    }
                }
                if (bingo) {
                    answer++;
                }
            }
        }
    }

    cout << answer;

    return 0;
}