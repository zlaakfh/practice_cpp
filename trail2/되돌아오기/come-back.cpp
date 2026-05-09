#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0, y = 0;
    int time = 0;

    int answer = 0;

    for (int i = 0; i < n; i++) {
        char dir;
        int dist;
        cin >> dir >> dist;

        for (int j = 0; j < dist; j++) {
            if (dir == 'N') y++;
            else if (dir == 'S') y--;
            else if (dir == 'W') x--;
            else if (dir == 'E') x++;

            time++;

            if (x == 0 && y == 0) {
                answer = time;
                cout << answer;
                return 0;
            }
        }
    }

    cout << -1;
    
    return 0;
}