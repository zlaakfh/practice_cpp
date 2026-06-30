#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, c, g, h;
    cin >> n >> c >> g >> h;

    int ta[1000];
    int tb[1000];

    for (int i = 0; i < n; i++) {
        cin >> ta[i] >> tb[i];
    }

    int answer = 0;

    for (int t = -1; t <= 1001; t++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (t < ta[i]) {
                sum += c;
            }
            else if (ta[i] <= t && t <= tb[i]) {
                sum += g;
            }
            else if (t > tb[i]) {
                sum += h;
            }
        }
        answer = max(answer, sum);
    }

    cout << answer;

    return 0;
}