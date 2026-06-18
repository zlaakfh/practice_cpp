#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100], b[100];

    for (int i = 0 ; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int answer = 0;

    for (int skip = 0; skip < n; skip++) {
        int time[1001] = {};

        for (int i = 0; i < n; i++) {
            if (i == skip) continue;

            for (int t = a[i]; t < b[i]; t++) {
                time[t]++;
            }
        }

        int total = 0;

        for (int t = 1; t <= 1000; t++) {
            if (time[t] > 0) {
                total++;
            }
        }

        answer = max(answer, total);

    }

    cout << answer;

    return 0;
}