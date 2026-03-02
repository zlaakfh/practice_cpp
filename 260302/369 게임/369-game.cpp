#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        bool is369 = false;

        if (i % 3 == 0) {
            is369 = true;
        }

        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                is369 = true;
                break;
            }
            temp /= 10;
        }

        if (is369) cout << 0 << " ";
        else cout << i << " ";
    }
    return 0;
}