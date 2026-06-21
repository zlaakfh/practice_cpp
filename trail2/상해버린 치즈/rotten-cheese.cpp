#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, d, s;
    cin >> n >> m >> d >> s;

    int eat[51][51];

    for (int p = 1; p <= n; p++) {
        for (int c = 1; c <= m; c++) {
            eat[p][c] = 1000000000;
        }
    }

    for (int i = 0; i < d; i++) {
        int p, c, t;
        cin >> p >> c >> t;

        eat[p][c] = min(eat[p][c], t);
    }

    int sickPerson[51];
    int sickTime[51];

    for (int i = 0; i < s; i++) {
        cin >> sickPerson[i] >> sickTime[i];
    }

    int answer = 0;

    for (int cheese = 1; cheese <= m; cheese++) {
        bool possible = true;

        for (int i = 0; i < s; i++) {
            int p = sickPerson[i];
            int t = sickTime[i];

            if (eat[p][cheese] >= t) {
                possible = false;
                break;
            }
        }

        if (!possible) continue;

        int cnt = 0;

        for (int p = 1; p <= n; p++) {
            if (eat[p][cheese] != 1000000000) {
                cnt++;
            }
        }

        answer = max(answer, cnt);
    }

    cout << answer;

    return 0;
}