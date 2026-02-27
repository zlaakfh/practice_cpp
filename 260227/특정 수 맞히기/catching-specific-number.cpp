#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while (true) {
        int n;
        cin >> n;
        if (n ==25) {
            cout << "Good";
            break;
        }
        else if (n < 25) {
            cout << "Higher" << "\n";
        }
        else {
            cout << "Lower" << "\n";
        }
    }
    return 0;
}