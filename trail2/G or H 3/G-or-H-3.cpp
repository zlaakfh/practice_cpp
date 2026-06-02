#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    char arr[10001] = {};

    for (int i = 0; i < n; i++) {
        int pos;
        char c;
        cin >> pos >> c;
        
        if (c == 'G') {
            arr[pos] = 1;
        }
        else if (c == 'H') {
            arr[pos] = 2;
        }
    }

    int answer = 0;

    for (int start = 1; start <= 10000; start++) {
        int sum = 0;

        for (int x = start; x <= start + k && x <= 10000; x++) {
            sum += arr[x];
        }

        answer = max(sum, answer);
    }

    cout << answer;

    return 0;
}