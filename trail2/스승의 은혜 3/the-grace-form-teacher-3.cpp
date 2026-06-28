#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int price[1000];
    int ship[1000];

    for (int i = 0; i < n; i++) {
        cin >> price[i] >> ship[i];
    }

    int answer = 0;

    for (int coupon = 0; coupon < n; coupon++) {
        int cost[1000];

        for (int i = 0; i < n; i++) {
            if (i == coupon) {
                cost[i] = price[i] / 2 + ship[i];
            }
            else {
                cost[i] = price[i] + ship[i];
            }
        }

        sort(cost, cost + n);

        int money = b;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (money >= cost[i]) {
                money -= cost[i];
                cnt++;
            }
            else {
                break;
            }
        }
        
        answer = max(answer, cnt);
    }

    cout << answer;

    return 0;
}