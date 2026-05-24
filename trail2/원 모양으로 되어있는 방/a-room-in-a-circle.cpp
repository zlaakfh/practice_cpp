#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = INT_MAX;

    for (int s = 0; s < n; s++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int dist = (i - s + n) % n;
            sum += dist * arr[i];
        }

        answer = min(answer, sum);
    }

    cout << answer;

    return 0;
}