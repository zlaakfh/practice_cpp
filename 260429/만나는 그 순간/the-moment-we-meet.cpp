#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int posA[1000001] = {0};
    int posB[1000001] = {0};

    int timeA = 0;
    int curA = 0;

    for (int i = 0; i < n; i++) {
        char dir;
        int t;
        cin >> dir >> t;

        for (int j = 0; j < t; j++) {
            timeA++;

            if (dir == 'R') curA++;
            else curA--;

            posA[timeA] = curA;
        }
    }

    int timeB = 0;
    int curB = 0;

    for (int i = 0; i < m; i++) {
        char dir;
        int t;
        cin >> dir >> t;

        for (int j = 0; j < t; j++) {
            timeB++;

            if (dir == 'R') curB++;
            else curB--;

            posB[timeB] = curB;
        }
    }

    int total_time = timeA;
    int ans = -1;

    for (int i = 1; i <= total_time; i++) {
        if (posA[i] == posB[i]) {
            ans = i;
            break;
        }
    }

    cout << ans;
    
    return 0;
}