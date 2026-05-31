#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> arr(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int answer = INT_MAX;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int t = sum - arr[i] - arr[j];
            int diff = abs(t - s);

            answer = min(answer, diff);
        }
    }

    cout << answer;
    
    return 0;
}