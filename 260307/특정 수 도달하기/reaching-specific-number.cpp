#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double avg;
    int total = 0;
    int cnt = 0;
    int n;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n >= 250) {
            break;
        }
        else {
            cnt += 1;
            total += n;
        }
    }
    cout << total << " ";
    avg = (double)total / cnt;
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}