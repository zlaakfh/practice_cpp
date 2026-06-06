#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(101);

    for (int i = 0; i < n; i++) {
        int cnt, pos;
        cin >> cnt >> pos;

        arr[pos] += cnt;        
    }

    int answer = 0;

    for (int c = 0; c <= 100; c++) {
        int sum = 0;

        for (int x = c - k; x <= c +k; x++) {
            if (x >= 0 && x <= 100) {
                sum += arr[x];
            }
        }
        answer = max(answer, sum);
    }

    cout << answer;

    return 0;
}