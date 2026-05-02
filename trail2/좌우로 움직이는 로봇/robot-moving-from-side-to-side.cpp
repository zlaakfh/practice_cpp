#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, char>> A(n), B(m);
    int totalA = 0, totalB = 0;

    for (int i = 0; i < n; i++) {
        cin >> A[i].first >> A[i].second;
        totalA += A[i].first;
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i].first >> B[i].second;
        totalB += B[i].first;
    }

    int totalTime = max(totalA, totalB);
    vector<int> posA(totalTime + 1);
    vector<int> posB(totalTime + 1);

    int time = 0, x = 0;

    for (auto [t, d] : A) {
        for (int i = 0; i < t; i++) {
            time++;
            if (d == 'R') x++;
            else x--;
            posA[time] = x;
        }
    }

    for (int i = time + 1; i <= totalTime; i++) {
        posA[i] = x;
    }

    time = 0;
    x = 0;

    for (auto [t, d] : B) {
        for (int i = 0; i < t; i++) {
            time++;
            if (d == 'R') x++;
            else x--;
            posB[time] = x;
        }
    }

    for (int i = time + 1; i <= totalTime; i++) {
        posB[i] = x;
    }

    int answer = 0;

    for (int i = 1; i <= totalTime; i++) {
        if (posA[i] == posB[i] && posA[i-1] != posB[i-1]) {
            answer++;
        }
    }

    cout << answer;

    return 0;
}

