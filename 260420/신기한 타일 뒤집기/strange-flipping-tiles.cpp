#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int SIZE = 200001;
    int offset = 100000;
    int color[SIZE] = {0};
    int cur = offset;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;
        
        if (dir == 'R') {
            for (int j = cur; j <= cur + x - 1; j++) {
                color[j] = 2;
            }
            cur = cur + x - 1;
        }
        else {
            for (int j = cur; j >= cur - x + 1; j--) {
                color[j] = 1;
            }
            cur = cur - x + 1;
        }
    }

    int whitecnt = 0;
    int blackcnt = 0;

    for (int i = 0; i < SIZE; i++) {
        if (color[i] == 1) whitecnt++;
        else if (color[i] == 2) blackcnt++;
    }

    cout << whitecnt << " " << blackcnt;

    return 0;
}