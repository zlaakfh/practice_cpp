#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int A[1000001] = {0};
    int B[1000001] = {0};
    
    int timeA = 0;
    int posA = 0;

    for (int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;

        for (int j = 0; j < t; j++) {
            timeA++;
            posA += v;
            A[timeA] = posA;
        }
    }

    int timeB = 0;
    int posB = 0;

    for (int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        for (int j = 0; j < t; j++) {
            timeB++;
            posB += v;
            B[timeB] = posB;
        }
    }

    int totalTime = timeA;

    int prevlead = 0;
    int ans = 0;

    for (int i = 1; i <= totalTime; i++) {
        int curlead;

        if (A[i] > B[i]) {
            curlead = 1;
        }
        else if (A[i] < B[i]) {
            curlead = 2;
        }
        else curlead = 0;

        if (curlead == 0) continue;

        if (prevlead == 0) {
            prevlead = curlead;
        }
        else if (curlead != prevlead)  {
            ans++;
            prevlead = curlead;
        }
    }

    cout << ans;

    return 0;
}