#include <iostream>
#include <string>
using namespace std;

int main() {
    string cmd;
    cin >> cmd;

    int x = 0, y = 0;
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int dir = 0;

    for (int i = 0; i < cmd.size(); i++) {
        char c = cmd[i];

        if (c == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
        else if (c == 'L') {
            dir = (dir + 3) % 4;
        }
        else if (c == 'R') {
            dir = (dir + 1) % 4;
        }
    }

    cout << x << " " << y;
    
    return 0;
} 