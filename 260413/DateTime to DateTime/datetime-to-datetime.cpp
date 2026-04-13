#include <iostream>
using namespace std;

int main() {
    int d1 = 11;
    int h1 = 11;
    int m1 = 11;

    int d2, h2, m2;
    cin >> d2 >> h2 >> m2;

    int time = 0;

    if (d2 < d1 || h2 < h1 || m2 < m1) {
        time = -1;
    }

    else {
        while (true) {
            if (d1 == d2 && h1 == h2 && m1 == m2) break;

            m1++;
            time++;

            if (m1 == 60) {
                m1 = 0;
                h1++;
            }

            if (h1 == 24) {
                h1 = 0;
                d1++;
            }
        }
    }
    
    cout << time;
    return 0;
}