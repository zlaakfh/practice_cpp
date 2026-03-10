#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1001];

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int end = n;

    while (true) {
        int max_idx = 1;
        for (int i = 2; i <= end; i++) {
            if (arr[i] > arr[max_idx]) {
                max_idx = i;
            }
        }
        cout << max_idx << " ";

        if (max_idx == 1) {
            break;
        }

        end = max_idx - 1;
    }
    
    // Please write your code here.

    return 0;
}
