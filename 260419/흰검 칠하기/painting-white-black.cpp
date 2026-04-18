#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int offset = 100000;
    int size = 200001;

    int white[size] = {0};
    int black[size] = {0};
    int color[size] = {0}; // 0 : none, 1 : white, 2 : black, 3 : gray

    int cur = offset;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'R') {
            for (int j = cur; j <= cur + x - 1; j++) {
                if (color[j] == 3) continue;

                black[j]++;
                color[j] = 2;
                if (black[j] >= 2 && white[j] >= 2) {
                    color[j] = 3;
                }
            }
            cur = cur + x - 1;
        }
        else {
            for (int j = cur; j >= cur - x + 1; j--) {
                if (color[j] == 3) continue;

                white[j]++;
                color[j] = 1;
                if (white[j] >= 2 && black[j] >= 2) {
                    color[j] = 3;
                }
            }
            cur = cur - x + 1;
        }
    }

    int whitecnt = 0, blackcnt = 0, graycnt = 0;

    for (int i = 0; i < size; i++) {
        if (color[i] == 1) whitecnt++;
        else if (color[i] == 2) blackcnt++;
        else if (color[i] == 3) graycnt++;
    }

    cout << whitecnt << " " << blackcnt << " " << graycnt;


    return 0;
}