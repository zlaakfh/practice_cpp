#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1};
    int x = 0, y = 0;

    for (int i = 0; i < n; i++) {
        char dir;
        int dist;
        cin >> dir >> dist;

        if (dir == 'E') {
            x = x + dist * dx[0];
            y = y + dist * dy[0];
        }
        else if (dir == 'W') {
            x = x + dist * dx[1];
            y = y + dist * dy[1];
        }
        else if (dir == 'S') {
            x = x + dist * dx[2];
            y = y + dist * dy[2];
        }
        else if (dir == 'N') {
            x = x + dist * dx[3];
            y = y + dist * dy[3];
        }
    }

    cout << x << " " << y;

    return 0;
}