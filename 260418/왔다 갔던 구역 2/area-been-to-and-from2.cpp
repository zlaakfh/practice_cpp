#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[2001] = {0};
    int offset = 1000;
    int cur = 0;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;
        int next;

        if (dir == 'R') {
            next = cur + x;
            for (int j = cur; j < next; j++) {
                arr[j + offset]++;
            }
        }
        else {
            next = cur - x;
            for (int j = next; j < cur; j++) {
                arr[j + offset]++;
            }
        }
        cur = next;
    }

    int ans = 0;
    for (int i = 0; i < 2001; i++) {
        if (arr[i] >= 2) {
            ans++;
        }
    }
    cout << ans;

    return 0;
}