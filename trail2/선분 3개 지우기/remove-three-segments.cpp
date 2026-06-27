#include <iostream>
using namespace std;

int n;
int a[10], b[10];

bool Overlap(int i, int j) {
    if (b[i] < a[j] || b[j] < a[i]) {
        return false;
    }

    return true;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int answer = 0;

    for (int x = 0; x < n; x++) {
        for (int y = x + 1; y < n; y++) {
            for (int z = y + 1; z < n; z++) {
                bool possible = true;

                for (int i = 0; i < n; i++) {
                    if (i == x || i == y || i == z) continue;

                    for (int j = i + 1; j < n; j++) {
                        if (j == x || j == y || j == z) continue;

                        if (Overlap(i, j)) {
                            possible = false;
                        }
                    }
                }
                if (possible) answer++;
            }
        }
    }

    cout << answer;

    return 0;
}