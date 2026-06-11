#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int dist(int x, int y, int n) {
    int d = abs(x - y);
    return min(d, n - d);
}

bool close(int x, int y, int z, int a, int b, int c, int n) {
    return dist(x, a, n) <= 2 &&
           dist(y, b, n) <= 2 &&
           dist(z, c, n) <= 2;
}

int main() {
    int n;
    cin >> n;

    int a1, b1, c1;
    int a2, b2, c2;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int answer = 0;

    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            for (int z = 1; z <= n; z++) {
                if (close(x, y, z, a1, b1, c1, n) || close(x, y, z, a2, b2, c2, n)) {
                    answer++;
                }
            }
        }
    }

    cout << answer;

    return 0;
}