#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool noCarry(int a, int b, int c) {
    while (a > 0 || b > 0 || c > 0) {
        int sum = a % 10 + b % 10 + c % 10;

        if (sum >= 10) {
            return false;
        }

        a /= 10;
        b /= 10;
        c /= 10;
    }

    return true;    
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = -1;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (noCarry(arr[i], arr[j], arr[k])) {
                    answer = max(answer, arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }

    cout << answer;

    return 0;
}