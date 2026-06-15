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

    for (int skip = 0; skip < n; skip++) {
        int maxX = 0;
        int maxY = 0;
        int minX = INT_MAX;
        int minY = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (i == skip) continue;

            maxX = max(maxX, x[i]);
            maxY = max(maxY, y[i]);
            minX = min(minX, x[i]);
            minY = min(minY, y[i]);
        }
        int area = (maxX - minX) * (maxY - minY);
        answer = min(answer, area);
    }

    cout << answer;
    
    return 0;
}