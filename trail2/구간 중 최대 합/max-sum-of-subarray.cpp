#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[n] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = 0;

    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        answer = max(answer, sum);
    }

    cout << answer;

    return 0;
}