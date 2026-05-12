#include <iostream>
#include <string>
using namespace std;

int n;
string arr[1000];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool inRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int x, y, dir;

    if (1 <= k && k <= n) {
        x = 0;
        y = k - 1;
        dir = 0;
    }
    else if (n < k && k <= 2 * n) {
        x = k - n - 1;
        y = n - 1;
        dir = 1;
    }
    else if (2 * n < k && k <= 3 * n) {
        x = n - 1;
        y = n - (k - 2 * n);
        dir = 2;
    }
    else {
        x = n - (k - 3 * n);
        y = 0;
        dir = 3;
    }

    int answer = 0;

    while (inRange(x, y)) {
        answer++;

        if (arr[x][y] == '/') {
            if (dir == 0) dir = 1;
            else if (dir == 1) dir = 0;
            else if (dir == 2) dir = 3;
            else if (dir == 3) dir = 2;
        }
        else if (arr[x][y] == '\\') {
            if (dir == 0) dir = 3;
            else if (dir == 1) dir = 2;
            else if (dir == 2) dir = 1;
            else if (dir == 3) dir = 0;
        }

        x += dx[dir];
        y += dy[dir];
    }

    cout << answer;    

    return 0;
}