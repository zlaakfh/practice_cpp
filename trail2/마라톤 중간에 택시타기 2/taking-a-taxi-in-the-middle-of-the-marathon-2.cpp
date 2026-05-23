#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

int dist(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    int answer = INT_MAX;

    for (int skip = 1; skip <= n - 2; skip++) {
        int sum = 0;

        for (int i = 0; i < n - 1; i++) {
            if (i == skip) continue;
            
            if (i + 1 == skip) {
                sum += dist(arr[i], arr[i + 2]);
            }
            else {
                sum += dist(arr[i], arr[i + 1]);
            }
        }
        answer = min(answer, sum);
    }

    cout << answer;
    
    return 0;
}