#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    int day = 1;
    int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (true) {
        if (m1 == m2 && d1 == d2) {
            break;
        }

        d1++;
        day++;

        if (d1 > arr[m1]) {
            d1 = 1;
            m1++;
        }
    }

    cout << day;
    return 0;
}