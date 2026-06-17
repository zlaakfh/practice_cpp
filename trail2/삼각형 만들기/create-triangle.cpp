#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[100], y[100];

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int answer = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (i == j || i == k || j == k) continue;

                if (x[i] == x[j] && y[i] == y[k]) {
                    int height = abs(y[i] - y[j]);
                    int width = abs(x[i] - x[k]);

                    answer = max(answer, height * width);
                }
            }
        }
    }

    cout << answer;

    return 0;
}