#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int arr[6];

int GetDiff(int a, int b, int c, int d) {
    int team1 = arr[a] + arr[b];
    int team2 = arr[c] + arr[d];

    int team3 = 0;

    for (int i = 0; i < 6; i++) {
        if (i == a || i == b || i == c || i == d) continue;

        team3 += arr[i];
    }

    int maxteam = max({team1, team2, team3});
    int minteam = min({team1, team2, team3});

    return maxteam - minteam;
}

int main() {
    int min_diff = INT_MAX; 

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for (int a = 0; a < 6; a++) {
        for (int b = a + 1; b < 6; b++) {
            for (int c = 0; c < 6; c++) {
                for (int d = c + 1; d < 6; d++) {
                    if (a == c || a == d || b == c || b == d) {
                        continue;
                    }
                    min_diff = min(min_diff, GetDiff(a, b, c, d));
                }
            }
        }
    }

    cout << min_diff;

    return 0;
}