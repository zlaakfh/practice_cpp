#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int arr[101] = {};
    int ans = -1;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        arr[num-1]++;
        if (arr[num-1] >= k) {
            ans = num;
            break;
        }
    }

    cout << ans;

    return 0;
}