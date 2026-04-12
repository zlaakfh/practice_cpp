#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    auto toDays = [&](int m, int d) {
        int total = 0;
        for (int i = 1; i < m; i++) { // 이전 달까지의 합산
            total += arr[i];
        }
        return total + d; // 이전 달까지의 합산 + 이번 달 일 수
    };

    cout << toDays(m2, d2) - toDays(m1, d1) + 1; 
    return 0;
}