#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, y = 0;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    string cmd;
    cin >> cmd;

    int dir = 0;
    int time = 0;

    for (int i = 0; i < cmd.size(); i++) {
        char c = cmd[i];
        
        if (c == 'L') {
            dir = (dir + 3) % 4;
        }
        else if (c == 'R') {
            dir = (dir + 1) % 4;
        }
        else if (c == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
        time++;

        if (x == 0 && y == 0) {
            cout << time;
            return 0;
        }

    }

    cout << -1;
    
    return 0;
}