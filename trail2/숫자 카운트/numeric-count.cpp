#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int q[10];
    int cnt1[10];
    int cnt2[10];

    for (int i = 0; i < n; i++) {
        cin >> q[i] >> cnt1[i] >> cnt2[i];
    }

    int answer = 0;

    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            for (int c = 1; c <= 9; c++) {
                if (a == b || b == c || c == a) continue;

                bool possible = true;

                for (int i = 0; i < n; i++) {
                    int x = q[i] / 100;
                    int y = (q[i] / 10) % 10;
                    int z = q[i] % 10;

                    int one = 0;
                    int two = 0;

                    if (a == x) one++;
                    if (b == y) one++;
                    if (c == z) one++;

                    if (a == y || a == z) two++;
                    if (b == x || b == z) two++;
                    if (c == x || c == y) two++;

                    if (one != cnt1[i] || two != cnt2[i]) {
                        possible = false;
                        break;
                    }
                }
                
                if (possible) answer++;
            }
        }
    }

    cout << answer;

    return 0;
}