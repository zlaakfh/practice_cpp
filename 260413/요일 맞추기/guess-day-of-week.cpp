#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    auto toDays = [&](int m, int d) {
        int total = 0;
        for (int i = 1; i < m; i++) {
            total += days[i];
        }
        return total + d;
    };

    int diff = toDays(m2, d2) - toDays(m1, d1);
    int idx = ((diff % 7) + 7) % 7;

    cout << week[idx];
    
    return 0;
}