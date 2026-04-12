#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int time = 0;

    while (true) {
        if (a == c && b == d) {
            break;
        }

        b++;
        time++;

        if (b == 60) {
            b = 0;
            a++;
        }
    }

    cout << time;
    return 0;
}