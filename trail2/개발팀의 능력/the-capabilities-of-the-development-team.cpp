#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int arr[5];

int GetDiff(int a, int b, int c, int d) {
    int team1 = arr[a] + arr[b];
    int team2 = arr[c] + arr[d];
    int team3 = 0;

    for (int i = 0; i < 5; i++) {
        if (i == a || i == b || i == c || i == d) {
            continue;
        }
        team3 += arr[i];
    }
    
    if (team1 == team2 || team1 == team3 || team2 == team3) {
        return INT_MAX;
    }

    int maxteam = max({team1, team2, team3});
    int minteam = min({team1, team2, team3});

    return maxteam - minteam;
}

int main() {
    for (int i = 0 ; i < 5; i++) {
        cin >> arr[i];
    }

    int answer = INT_MAX;

    for (int a = 0; a < 5; a++) {
        for (int b = a + 1; b < 5; b++) {
            for (int c = 0; c < 5; c++) {
                for (int d = c + 1; d < 5; d++) {
                    if (a == c || a == d || b == c || b == d) {
                        continue;
                    }
                    answer = min(answer, GetDiff(a, b, c, d));
                }
            }
        }
    }

    if (answer == INT_MAX)  {
        cout << -1;
    }
    else {
        cout << answer;
    }
    
    return 0;
}