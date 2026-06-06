#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, char>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end());
    int answer = 0;

    for (int i = 0; i < n; i++) {
        int g = 0;
        int h = 0;

        for (int j = i; j < n; j++) {
            if (arr[j].second == 'G') g++;
            else if (arr[j].second == 'H') h++;

            if (g == h || g == 0 || h == 0) {
                int dist = arr[j].first - arr[i].first;
                answer = max(dist, answer);
            }
        }
    }

    cout << answer;

    return 0;
}