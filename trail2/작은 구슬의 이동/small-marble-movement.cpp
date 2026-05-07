#include <iostream>
using namespace std;

int n, t;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool inRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n >> t;
    int r, c;
    char d;
    cin >> r >> c >> d;
    int dir;

    r -= 1;
    c -= 1;

    if (d == 'U') dir = 0;
    else if (d == 'D') dir = 1;
    else if (d == 'R') dir = 2;
    else if (d == 'L') dir = 3;

    for (int i = 0; i < t; i++) {
        int nr = r + dx[dir];   
        int nc = c + dy[dir];

        if (!inRange(nr, nc)) {
            if (dir == 0) dir = 1;
            else if (dir == 1) dir = 0;
            else if (dir == 2) dir = 3;
            else if (dir == 3) dir = 2;
        }

        else {
            r = nr;
            c = nc;
        }
    }

    cout << r + 1 << " " << c + 1;


    return 0;
}