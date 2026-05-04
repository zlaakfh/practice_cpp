#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(1000001, 0), B(1000001, 0);

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
    int prevlead = 3; 
    int answer = 0;

    for (int i = 1; i <= totalTime; i++) {
        int curlead;
        if (A[i] > B[i]) {
            curlead = 1;
        }
        else if (A[i] < B[i]) {
            curlead = 2;
        }
        else {
            curlead = 3;
        }

        if (curlead != prevlead) {
            answer++;
            prevlead = curlead;
        }
    }

    cout << answer;
    
    return 0;
}