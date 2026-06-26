#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (j - i <= k && arr[i] == arr[j]) {
                answer = max(answer, arr[i]);
            }
        }
    }

    cout << answer;

    return 0;
}