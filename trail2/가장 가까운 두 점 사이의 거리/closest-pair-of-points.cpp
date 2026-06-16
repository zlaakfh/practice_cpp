#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int x[100], y[100];

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int answer = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];

            int dist = dx * dx + dy * dy;

            answer = min(answer, dist);
        }
        
    }

    cout << answer;

    return 0;
}