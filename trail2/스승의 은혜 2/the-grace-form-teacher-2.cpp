#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = 0;

    for (int coupon = 0; coupon < n; coupon++) {
        int temp[1000];

        for (int i = 0; i < n; i++) {
            temp[i] = arr[i];
        }

        temp[coupon] /= 2;

        sort(temp, temp + n);

        int money = b;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (money >= temp[i]) {
                money -= temp[i];
                cnt++;
            }
        }

        answer = max(answer, cnt);
    }

    cout << answer;

    return 0;
}