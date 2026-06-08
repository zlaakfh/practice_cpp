#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b, c;
    cin >> a >> b >> c;

    int answer = 0;

    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            for (int z = 1; z <= n; z++) {
                if (abs(x - a) <= 2 ||
                    abs(y - b) <= 2 ||
                    abs(z - c) <= 2) {
                        answer++;
                    }
            }
        }
    }

    cout << answer;

    return 0;
}