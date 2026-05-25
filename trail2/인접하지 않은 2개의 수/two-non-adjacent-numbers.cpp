#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n] = {};
    int answer = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 2; j < n; j++) {
            int sum = arr[i] + arr[j];

            answer = max(sum, answer);
        }
    }

    cout << answer;
    return 0;
}