#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n, h, t;
    cin >> n >> h >> t;

    int arr[100] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = INT_MAX;

    for (int i = 0; i <= n - t; i++) {
        int cost = 0;

        for (int j = i; j < i + t; j++) {
            cost += abs(arr[j] - h);
        }

        answer = min(answer, cost);
    }

    cout << answer;

    return 0;
}