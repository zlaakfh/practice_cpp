#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    string w;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> w;

    int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    auto toDays = [&](int m, int d) {
        int total = 0;
        for (int i = 1; i < m; i++) {
            total += days[i];
        }
        return total + d;
    };

    int diff = toDays(m2, d2) - toDays(m1, d1);
    
    int target = -1;
    for (int i = 0; i < 7; i++) {
        if (week[i] == w) {
            target = i;
            break;
        }
    }

    int cnt = 0;
    for (int i = 0; i <= diff; i++) {
        if (i % 7 == target) {
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}