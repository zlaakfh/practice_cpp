#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++) {
            if (cnt % 10 == 0) {
                cnt = 1;
            }
            cout << cnt << " ";
            cnt += 1;
        }
        cout << endl;
    }

    return 0;
}